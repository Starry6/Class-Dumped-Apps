@interface MPSCNNSgdOptimizerKernel : MPSCNNKernel
- (void)encode:weight:dweight:param:;
- (void)encodeToCommandBuffer:weight:dweight:param:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
