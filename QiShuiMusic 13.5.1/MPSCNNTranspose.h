@interface MPSCNNTranspose : MPSCNNKernel
- (void)encodeToCommandBuffer:input:output:transposeIn:transposeOut:params:transposeGlobalSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
