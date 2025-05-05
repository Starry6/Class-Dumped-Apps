@interface MPSGraphConvolution2DDataGradientOp : MPSGraphConvolution2DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
@end
