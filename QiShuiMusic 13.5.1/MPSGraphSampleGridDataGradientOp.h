@interface MPSGraphSampleGridDataGradientOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:normalizeCoordinates:relativeCoordinates:paddingMode:samplingMode:name:;
@end
