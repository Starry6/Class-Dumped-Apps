@interface MPSGraphStencilOp : MPSGraphOperation
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:name:;
@end
