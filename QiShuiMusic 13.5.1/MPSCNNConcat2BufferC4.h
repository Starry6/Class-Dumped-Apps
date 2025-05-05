@interface MPSCNNConcat2BufferC4 : MPSCNNKernel
- (void)encode:input0:input1:input2:output:params:threads:dispatchThreads:;
- (void)encode:input0:input1:output:params:threads:dispatchThreads:;
- (id)initWithDevice:library:concat_type:concat_num:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
