@interface MPSNNOptimizerStochasticGradientDescent : MPSNNOptimizer
@property (nonatomic) float momentumScale;
@property (nonatomic) BOOL useNesterovMomentum;
@property (nonatomic) BOOL useNestrovMomentum;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:momentumScale:useNestrovMomentum:optimizerDescriptor:;
- (id)initWithDevice:learningRate:;
- (void)encodeToCommandBuffer:inputGradientVector:inputValuesVector:inputMomentumVector:resultValuesVector:;
- (float)momentumScale;
- (void)encodeToCommandBuffer:convolutionGradientState:convolutionSourceState:inputMomentumVectors:resultState:;
- (void)encodeToCommandBuffer:batchNormalizationState:inputMomentumVectors:resultState:;
- (id)initWithDevice:optimizerDescriptor:;
- (BOOL)useNestrovMomentum;
- (id)initWithDevice:momentumScale:useNesterovMomentum:optimizerDescriptor:;
- (void)encodeToCommandBuffer:inputGradientMatrix:inputValuesMatrix:inputMomentumMatrix:resultValuesMatrix:;
- (void)encodeToCommandBuffer:batchNormalizationGradientState:batchNormalizationSourceState:inputMomentumVectors:resultState:;
- (BOOL)useNesterovMomentum;
+ (id)libraryInfo:;
@end
