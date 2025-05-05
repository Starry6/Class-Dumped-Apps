@interface MPSCNNReshape : MPSCNNKernel
- (void)encodeToCommandBuffer:input:output:channels:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
