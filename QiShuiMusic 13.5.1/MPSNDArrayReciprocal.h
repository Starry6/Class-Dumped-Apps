@interface MPSNDArrayReciprocal : MPSNDArrayMathUnaryKernel
- (id)initWithDevice:;
+ (id)createDAGOpForDAG:xTensor:shape:dataType:;
+ (id)libraryInfo:;
@end
