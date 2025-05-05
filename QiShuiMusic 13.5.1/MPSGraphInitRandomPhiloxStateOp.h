@interface MPSGraphInitRandomPhiloxStateOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:counterLow:counterHigh:key:name:;
@end
