@interface MPSGraphTopKOp : MPSGraphTopKBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)partialDerivativesForInputTensors:incomingGradients:name:;
@end
