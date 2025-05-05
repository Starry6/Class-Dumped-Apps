@interface MPSGraphSampleGridOp : MPSGraphOperation
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:inputTensors:controlDependencies:normalizeCoordinates:relativeCoordinates:paddingMode:samplingMode:name:;
@end
