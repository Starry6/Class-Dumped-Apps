@interface MPSGraphStitchedOp : MPSGraphOperation
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:withBlock:inputTensors:controlDependencies:name:;
- (void)recurseOperation:builder:symbolTable:tensorToValueMap:operationsRecursed:;
@end
