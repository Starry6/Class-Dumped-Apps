@interface MPSGraphLSTMGradientOp : MPSGraphLSTMBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:name:;
@end
