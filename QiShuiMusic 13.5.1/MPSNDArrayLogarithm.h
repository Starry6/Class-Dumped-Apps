@interface MPSNDArrayLogarithm : MPSNDArrayMathUnaryKernel
- (id)initWithDevice:;
+ (id)createDAGOpForDAG:xTensor:shape:dataType:;
+ (id)libraryInfo:;
@end
