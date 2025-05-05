@interface MLCTransposeLayer : MLCLayer
@property (nonatomic) NSArray shape;
@property (nonatomic) NSArray dimensions;
- (id)dimensions;
- (id)shape;
- (id)initWithDimensions:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (unsigned long long)resultSizeFromSourceSizes:dimension:;
- (BOOL)isStaticBatchSize;
+ (id)transposeLayer:error:;
+ (id)layerWithDimensions:;
+ (BOOL)supportsDataType:onDevice:;
@end
