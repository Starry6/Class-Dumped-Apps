@interface MPSNDArrayLogarithmBase2 : MPSNDArrayMathUnaryKernel
- (id)initWithDevice:;
+ (id)createDAGOpForDAG:xTensor:shape:dataType:;
+ (id)libraryInfo:;
@end
