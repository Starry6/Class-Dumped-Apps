@interface MPSNDArraySelect : MPSNDArrayMathTernaryKernel
- (id)initWithDevice:;
+ (id)createDAGOpForDAG:xTensor:yTensor:zTensor:shape:dataType:;
+ (id)libraryInfo:;
@end
