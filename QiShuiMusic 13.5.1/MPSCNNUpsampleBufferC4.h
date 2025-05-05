@interface MPSCNNUpsampleBufferC4 : MPSCNNKernel
- (void)encode:sourceBuffer:destinationBuffer:params:threads:dispatchThreads:;
- (id)initWithDevice:library:resizeType:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
