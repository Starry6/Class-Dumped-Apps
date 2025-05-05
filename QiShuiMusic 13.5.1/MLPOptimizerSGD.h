@interface MLPOptimizerSGD : MLPOptimizer
@property (nonatomic) MPSVector momentum;
- (void).cxx_destruct;
- (id)momentum;
- (void)setMomentum:;
- (void)encodeToCommandBuffer:inputGradientVector:inputValuesVector:;
- (void)updateLearningRate:;
- (id)initWithNetwork:momentum:;
@end
