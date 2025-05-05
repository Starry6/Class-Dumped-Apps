@interface MPSGraphDepthwiseConvolution2DDataGradientOp : MPSGraphDepthwiseConvolution2DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
@end
