@interface MPSGraphGRUOp : MPSGraphGRUBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativesForInputTensors:incomingGradients:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:name:;
@end
