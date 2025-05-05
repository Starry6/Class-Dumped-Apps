@interface MPSCNNTile : MPSCNNKernel
- (void)encodeToCommandBuffer:input:output:param:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
