#pragma once

namespace das {

    DebugAgentPtr makeDebugAgent ( const void * pClass, const StructInfo * info, Context * context );
    void debuggerStackWalk ( Context & context, const LineInfo & lineInfo );
    void debuggerSetContextSingleStep ( Context & context, bool step );

    DataWalkerPtr makeDataWalker ( const void * pClass, const StructInfo * info, Context * context );
    void dapiWalkData ( DataWalkerPtr walker, void * data, const TypeInfo & info );
    void dapiWalkDataV ( DataWalkerPtr walker, float4 data, const TypeInfo & info );

    StackWalkerPtr makeStackWalker ( const void * pClass, const StructInfo * info, Context * context );

    vec4f pinvoke_impl ( Context & context, SimNode_CallBase * call, vec4f * args );
    vec4f pinvoke_impl2 ( Context & context, SimNode_CallBase * call, vec4f * args );
    vec4f pinvoke_impl3 ( Context & context, SimNode_CallBase * call, vec4f * args );

    vec4f get_global_variable ( Context & context, SimNode_CallBase * call, vec4f * args );

    void instrument_context_node ( Context & ctx, bool isInstrumenting, const TBlock<bool,LineInfo> & blk );
    void instrument_function ( Context & ctx, Func fn, bool isInstrumenting, Context * context, LineInfoArg * arg );
    void instrument_all_functions ( Context & ctx );
    void clear_instruments ( Context & ctx );
}
