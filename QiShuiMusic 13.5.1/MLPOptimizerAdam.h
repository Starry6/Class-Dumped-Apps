@interface MLPOptimizerAdam : MLPOptimizer
@property (nonatomic) MPSVector momentum;
@property (nonatomic) MPSVector velocity;
- (id)velocity;
- (void)setVelocity:;
- (void).cxx_destruct;
- (id)momentum;
- (void)setMomentum:;
- (id)initWithNetwork:momentum:velocity:;
- (void)encodeToCommandBuffer:inputGradientVector:inputValuesVector:;
@end
