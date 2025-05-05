@interface MPSNDArrayLogarithmBase10 : MPSNDArrayMathUnaryKernel
- (id)initWithDevice:;
+ (id)createDAGOpForDAG:xTensor:shape:dataType:;
+ (id)libraryInfo:;
@end
