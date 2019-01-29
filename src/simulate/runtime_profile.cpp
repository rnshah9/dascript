#include "daScript/misc/platform.h"

#include "daScript/simulate/runtime_range.h"

extern int64_t ref_time_ticks ();
extern int get_time_usec (int64_t reft);

namespace das
{
    float builtin_profile ( int32_t count, char * category, Block block, Context * context ) {
        count = max(count,1);
        int minT = INT32_MAX;
        for ( int32_t i = 0; i != count; ++i ) {
            int64_t reft = ref_time_ticks();
            context->invoke(block, nullptr, nullptr);
            if (context->stopFlags & EvalFlags::stopForThrow) return 0.0f;
            minT = min(get_time_usec(reft), minT);
        }
        double tSec = minT/1000000.;
        if ( category ) {
            TextWriter ss;
            ss << "\"" << category << "\", " << FIXED << tSec << ", " << count << "\n";
            context->to_out(ss.str().c_str());
        }
        return (float) tSec;
    }
}

