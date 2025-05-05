@interface MLPSeqNetwork : MLPNetwork
@property (nonatomic) MLPLearningRateDecayHandler seqLearningRateDecayHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithLayers:;
- (void)runTraining:databatch:iteration:lossCallback:semaphore:;
- (unsigned long long)runInference:databatch:inferredResult:semaphore:;
- (id)computeInference:;
- (void)createLayerKernels;
- (void)setOptimizerParams:;
- (void)decayHandler:didUpdateLearningRate:;
- (float)computeLoss:;
- (id)seqLearningRateDecayHandler;
- (void)setSeqLearningRateDecayHandler:;
@end
