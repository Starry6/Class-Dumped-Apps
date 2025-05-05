@interface FeatureExtractor : EspressoModel
@property (nonatomic) Q outputChannels;
@property (nonatomic) NSInteger numLevels;
@property (nonatomic) BOOL baseStage;
- (id)initWithMode:;
- (unsigned long long)outputChannels;
- (void)setOutputChannels:;
- (int)numLevels;
- (BOOL)extractFeaturesFromImage:toFeatures:callback:;
- (void)getOutputTensorSize:level:;
- (BOOL)baseStage;
- (void)setBaseStage:;
+ (unsigned long long)numLevels;
@end
