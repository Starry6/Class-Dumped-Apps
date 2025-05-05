@interface MLCConditionalLayer : MLCLayer
@property (nonatomic) MLCGraph trueBranch;
@property (nonatomic) MLCGraph falseBranch;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)resultTensorFromSources:;
- (id)initWithTrueBranch:falseBranch:;
- (unsigned long long)resultSizeForOutputIndex:dimension:;
- (id)trueBranch;
- (id)falseBranch;
+ (id)layerWithTrueBranch:falseBranch:;
@end
