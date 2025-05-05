@interface MPSGraphGRUGradientOp : MPSGraphGRUBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:name:;
@end
