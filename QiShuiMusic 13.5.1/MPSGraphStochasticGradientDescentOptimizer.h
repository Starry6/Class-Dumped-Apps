@interface MPSGraphStochasticGradientDescentOptimizer : MPSGraphOptimizer
- (id)initWithGraph:learningRateTensor:trainableVariables:variablesToGradientTensorMap:name:;
@end
