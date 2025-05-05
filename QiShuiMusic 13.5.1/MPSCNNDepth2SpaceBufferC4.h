@interface MPSCNNDepth2SpaceBufferC4 : MPSCNNKernel
- (void)encode:input:output:param:threads:dispatchThreads:;
- (id)initWithDevice:library:type:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
