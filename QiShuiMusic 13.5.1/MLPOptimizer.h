@interface MLPOptimizer : NSObject
@property (nonatomic) MPSNNOptimizer mpsOptimizer;
@property (nonatomic) MLPNetwork network;
- (id)network;
- (void).cxx_destruct;
- (id)initWithNetwork:mpsOptimizer:;
- (void)encodeToCommandBuffer:inputGradientVector:inputValuesVector:;
- (void)encodeToCommandBuffer:inputGradientMatrix:inputValuesMatrix:;
- (void)updateLearningRate:;
- (id)mpsOptimizer;
+ (id)optimizerWithNetwork:momentum:velocity:;
@end
