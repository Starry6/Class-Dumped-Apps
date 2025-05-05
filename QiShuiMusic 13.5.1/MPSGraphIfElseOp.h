@interface MPSGraphIfElseOp : MPSGraphOperation
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (void)partialDerivateForCFOpWithAutodiff:;
- (BOOL)recurseFromBlock:onEscaped:withAutodiff:;
- (BOOL)recurseOnBlocksFromOutput:withAutodiff:;
- (id)initWithGraph:inputTensors:controlDependencies:trueBlock:falseBlock:name:;
@end
