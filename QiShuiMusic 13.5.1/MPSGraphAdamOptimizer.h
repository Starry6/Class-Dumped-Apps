@interface MPSGraphAdamOptimizer : MPSGraphOptimizer
- (void).cxx_destruct;
- (id)initWithGraph:learningRateTensor:trainableVariables:variablesToGradientTensorMap:name:;
- (id)initWithGraph:lossTensor:learningRateTensor:trainableVariables:name:;
- (id)initWithGraph:learningRateTensor:momentumTensors:velocityTensors:maximumVelocityTensors:beta1:beta2:epsilon:iterations:trainableVariables:variablesToGradientTensorMap:name:;
- (id)initWithGraph:lossTensor:learningRateTensor:momentumTensors:velocityTensors:maximumVelocityTensors:beta1:beta2:epsilon:iterations:trainableVariables:name:;
- (id)initWithGraph:lossTensor:learningRateTensor:beta1:beta2:epsilon:iterations:trainableVariables:name:;
@end
