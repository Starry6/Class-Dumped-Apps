@interface MPSGraphVariableOp : MPSGraphOperation
@property (nonatomic) MPSGraphVariable variable;
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
- (id)shape;
- (unsigned int)dataType;
- (id)variable;
- (void).cxx_destruct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (id)partialDerivativeForInputTensor:incomingGradient:inputIndex:name:;
- (id)initWithGraph:shape:dataType:name:;
- (id)mpsNDArrayWithDevice:;
- (id)initWithGraph:variableMPSNDArray:name:;
@end
