@interface MLCSplitLayer : MLCLayer
@property (nonatomic) Q dimension;
@property (nonatomic) Q splitCount;
@property (nonatomic) NSArray splitSectionLengths;
- (unsigned long long)dimension;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)splitCount;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (BOOL)compileForDevice:sourceTensors:resultTensors:;
- (unsigned long long)deviceMemorySizeWithOptimizer:device:;
- (BOOL)isStaticBatchSize;
- (id)initWithSplitCount:splitSectionLengths:dimension:;
- (id)splitSectionLengths;
+ (BOOL)supportsDataType:onDevice:;
+ (id)layerWithSplitCount:dimension:;
+ (id)layerWithSplitSectionLengths:dimension:;
@end
