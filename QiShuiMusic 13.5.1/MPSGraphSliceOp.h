@interface MPSGraphSliceOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dimension:start:length:name:;
@end
