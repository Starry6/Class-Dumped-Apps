@interface MLCGramMatrixLayer : MLCLayer
@property (nonatomic) float scale;
- (id)description;
- (float)scale;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (id)resultTensorFromSources:;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (unsigned long long)resultSizeFromSourceSizes:dimension:;
- (id)initWithScaleFactor:;
+ (id)layerWithScale:;
@end
