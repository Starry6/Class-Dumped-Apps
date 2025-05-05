@interface MLCPhiLayer : MLCLayer
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (id)initWithControlTreeNode:sources:resultTensor:;
+ (id)layerWithControlTreeNode:sources:resultTensor:;
@end
