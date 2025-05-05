@interface MPSGraphDepthwiseConvolution3DDataGradientOp : MPSGraphDepthwiseConvolution3DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
@end
