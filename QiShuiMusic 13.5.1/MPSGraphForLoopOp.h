@interface MPSGraphForLoopOp : MPSGraphOperation
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)makeMLIROpWithBuilder:symbolTable:inputValues:opInitialization:name:;
- (void)partialDerivateForCFOpWithAutodiff:;
- (BOOL)recurseFromBlock:onEscaped:withAutodiff:;
- (BOOL)recurseOnBlocksFromOutput:withAutodiff:;
- (BOOL)recurseOutFromBlockInput:withAutodiff:;
- (id)initWithGraph:inputTensors:controlDependencies:bodyBlock:iterArgs:name:;
@end
