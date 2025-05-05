@interface MPSNDArrayModulo : MPSNDArrayMathBinaryKernel
- (id)initWithDevice:;
+ (id)createDAGOpForDAG:xTensor:yTensor:shape:dataType:;
+ (id)libraryInfo:;
@end
