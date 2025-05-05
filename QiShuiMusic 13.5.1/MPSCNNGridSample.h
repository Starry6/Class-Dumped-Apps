@interface MPSCNNGridSample : MPSCNNKernel
- (void)encodeToCommandBuffer:input:grid:batch:output:;
- (id)initWithDevice:library:mode:;
- (void).cxx_destruct;
@end
