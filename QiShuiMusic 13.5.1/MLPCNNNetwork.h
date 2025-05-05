@interface MLPCNNNetwork : MLPNetwork
- (id)initWithLayers:;
- (void)runTraining:databatch:iteration:lossCallback:semaphore:;
- (unsigned long long)runInference:databatch:inferredResult:semaphore:;
- (id)computeInference:;
- (void)createLayerKernels;
- (void)setOptimizerParams:;
- (float)computeLoss:;
@end
