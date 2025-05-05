@interface MLCSoftmaxLayer : MLCLayer
@property (nonatomic) NSInteger operation;
@property (nonatomic) Q dimension;
- (int)operation;
- (unsigned long long)dimension;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (id)initWithSoftmaxOperation:dimension:;
+ (id)softmax;
+ (id)layerWithOperation:;
+ (id)layerWithOperation:dimension:;
@end
