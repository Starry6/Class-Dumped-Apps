@interface MPSKernelDAGObject : NSObject
@property (nonatomic) ^v finalOp;
@property (nonatomic) ^v graph;
@property (nonatomic)  hash;
- (id)graph;
- (void)dealloc;
- (id)hash;
- (id)debugDescription;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)finalOp;
- (id)initWithKernelDAG:finalOp:;
- (id)inputTensorAtIndex:;
- (id)outputTensorAtIndex:;
- (unsigned long long)numberOfInputTensors;
- (unsigned long long)numberOfOutputTensors;
- (id)getStitchedFunctions:;
- (BOOL)hasPostfixFunction;
@end
