@interface MLCConcatenationLayer : MLCLayer
@property (nonatomic) Q dimension;
- (unsigned long long)dimension;
- (id)description;
- (id)copyWithZone:;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (BOOL)isStaticBatchSize;
- (id)initWithDimension:;
+ (id)concatNDLayer:error:;
+ (id)layer;
+ (id)layerWithDimension:;
+ (BOOL)supportsDataType:onDevice:;
@end
