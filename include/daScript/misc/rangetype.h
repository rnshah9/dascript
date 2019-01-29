#pragma once

namespace das
{
    template <typename TT>
    struct RangeType {
        TT  from;   //  [from,to) range
        TT  to;
        __forceinline friend TextWriter& operator<< (TextWriter& stream, const RangeType<TT> & vec) {
            stream << vec.from << "," << vec.to;
            return stream;
        }
        __forceinline bool operator == ( const RangeType<TT> & vec ) const {
            return from==vec.from && to==vec.to;
        }
    };

    typedef RangeType<int32_t>  range;
    typedef RangeType<uint32_t> urange;
}

