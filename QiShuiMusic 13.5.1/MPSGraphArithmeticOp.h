@interface MPSGraphArithmeticOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:inputTensors:controlDependencies:mathOpType:name:;
- (id)broadcastGradWithOutputGradient:inputIndex:name:;
- (id)broadcastGradTernaryWithOutputGradient:inputIndex:name:;
@end
