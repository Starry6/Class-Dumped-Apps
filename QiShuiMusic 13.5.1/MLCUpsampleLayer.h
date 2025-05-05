@interface MLCUpsampleLayer : MLCLayer
@property (nonatomic) Q upsampleWidth;
@property (nonatomic) Q upsampleHeight;
@property (nonatomic) NSArray shape;
@property (nonatomic) NSInteger sampleMode;
@property (nonatomic) BOOL alignsCorners;
- (id)shape;
- (void).cxx_destruct;
- (id)description;
- (int)sampleMode;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (id)initWithShape:sampleMode:alignCorners:;
- (BOOL)alignsCorners;
- (unsigned long long)upsampleWidth;
- (unsigned long long)upsampleHeight;
+ (id)layerWithShape:;
+ (id)layerWithShape:sampleMode:alignsCorners:;
@end
