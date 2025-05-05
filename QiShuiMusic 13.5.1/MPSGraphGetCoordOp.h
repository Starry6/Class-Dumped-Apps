@interface MPSGraphGetCoordOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dataType:name:;
@end
