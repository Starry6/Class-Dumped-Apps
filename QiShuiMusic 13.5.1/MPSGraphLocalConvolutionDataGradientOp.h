@interface MPSGraphLocalConvolutionDataGradientOp : MPSGraphLocalConvolutionBase
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dataLayout:kernelShape:dilationRateInX:dilationRateInY:name:;
@end
