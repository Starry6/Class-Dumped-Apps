@interface MPSGraphSplitOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativesForInputTensors:incomingGradients:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dimension:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dimension:numSplits:name:;
@end
