@interface MPSGraphSingleGateRNNGradientOp : MPSGraphSingleGateRNNBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:descriptor:name:;
@end
