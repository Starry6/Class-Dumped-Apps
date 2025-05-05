@interface MPSGraphMaxWithIndicesPooling2DOp : MPSGraphPooling2DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativesForInputTensors:incomingGradients:name:;
@end
