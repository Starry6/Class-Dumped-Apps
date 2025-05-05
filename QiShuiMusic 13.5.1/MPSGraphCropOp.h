@interface MPSGraphCropOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dimension_index:amount_before:amount_after:name:;
@end
