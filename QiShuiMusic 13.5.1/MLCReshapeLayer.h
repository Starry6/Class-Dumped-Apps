@interface MLCReshapeLayer : MLCLayer
@property (nonatomic) NSArray shape;
- (id)shape;
- (id)initWithShape:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (unsigned long long)deviceMemorySizeWithOptimizer:device:;
- (unsigned long long)deviceMemorySizeForForward;
- (BOOL)isStaticBatchSize;
+ (id)flattenLayerWithTensor:flattenParams:batchSize:error:;
+ (id)reshapeLayer:batchSize:error:;
+ (id)reshapeStaticLayer:batchSize:error:;
+ (id)layerWithShape:;
+ (BOOL)supportsDataType:onDevice:;
@end
