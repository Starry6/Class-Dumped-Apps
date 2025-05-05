@interface MPSGraphOneHotOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:depth:axis:dataType:name:;
@end
