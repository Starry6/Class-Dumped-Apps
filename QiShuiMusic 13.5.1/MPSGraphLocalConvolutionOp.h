@interface MPSGraphLocalConvolutionOp : MPSGraphLocalConvolutionBase
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:inputTensors:controlDependencies:dataLayout:kernelShape:dilationRateInX:dilationRateInY:name:;
@end
