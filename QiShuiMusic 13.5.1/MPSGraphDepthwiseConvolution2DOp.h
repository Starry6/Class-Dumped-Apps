@interface MPSGraphDepthwiseConvolution2DOp : MPSGraphDepthwiseConvolution2DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
@end
