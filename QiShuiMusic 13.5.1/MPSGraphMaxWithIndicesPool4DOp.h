@interface MPSGraphMaxWithIndicesPool4DOp : MPSGraphPooling4DBaseOp
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativesForInputTensors:incomingGradients:name:;
@end
