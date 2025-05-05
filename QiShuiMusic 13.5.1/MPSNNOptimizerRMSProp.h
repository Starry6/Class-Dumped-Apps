@interface MPSNNOptimizerRMSProp : MPSNNOptimizer
@property (nonatomic) double momentumScale;
@property (nonatomic) BOOL centered;
@property (nonatomic) double decay;
@property (nonatomic) float epsilon;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (double)decay;
- (id)debugDescription;
- (float)epsilon;
- (void)encodeWithCoder:;
- (BOOL)centered;
- (id)initWithDevice:learningRate:;
- (double)momentumScale;
- (id)initWithDevice:optimizerDescriptor:;
- (id)initWithDevice:decay:epsilon:optimizerDescriptor:;
- (id)initWithDevice:decay:epsilon:momentumScale:centered:optimizerDescriptor:;
- (void)encodeToCommandBuffer:inputGradientVector:inputValuesVector:inputSumOfSquaresVector:resultValuesVector:;
- (void)encodeToCommandBuffer:inputGradientMatrix:inputValuesMatrix:inputSumOfSquaresMatrix:resultValuesMatrix:;
- (void)encodeToCommandBuffer:inputGradientVector:inputValuesVector:inputSumOfSquaresVector:inputWeightedSumVector:inputMomentumVector:resultValuesVector:;
- (void)encodeToCommandBuffer:inputGradientMatrix:inputValuesMatrix:inputSumOfSquaresMatrix:inputWeightedSumMatrix:inputMomentumMatrix:resultValuesMatrix:;
- (void)encodeToCommandBuffer:convolutionGradientState:convolutionSourceState:inputSumOfSquaresVectors:resultState:;
- (void)encodeToCommandBuffer:batchNormalizationGradientState:batchNormalizationSourceState:inputSumOfSquaresVectors:resultState:;
- (void)encodeToCommandBuffer:batchNormalizationState:inputSumOfSquaresVectors:resultState:;
+ (id)libraryInfo:;
@end
