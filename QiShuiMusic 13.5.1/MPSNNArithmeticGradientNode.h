@interface MPSNNArithmeticGradientNode : MPSNNGradientFilterNode
@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) Q secondaryStrideInPixelsX;
@property (nonatomic) Q secondaryStrideInPixelsY;
@property (nonatomic) Q secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) BOOL isSecondarySourceFilter;
- (void)setBias:;
- (float)bias;
- (float)minimumValue;
- (void)setMaximumValue:;
- (float)maximumValue;
- (void)setMinimumValue:;
- (void)setSecondaryStrideInPixelsY:;
- (void)setSecondaryStrideInPixelsX:;
- (float)primaryScale;
- (void)setPrimaryScale:;
- (float)secondaryScale;
- (void)setSecondaryScale:;
- (void)setSecondaryStrideInFeatureChannels:;
- (unsigned long long)secondaryStrideInFeatureChannels;
- (BOOL)isSecondarySourceFilter;
- (unsigned long long)secondaryStrideInPixelsX;
- (unsigned long long)secondaryStrideInPixelsY;
- (id)initWithSourceGradient:sourceImage:gradientState:isSecondarySourceFilter:;
- (id)initWithGradientImages:forwardFilter:isSecondarySourceFilter:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:isSecondarySourceFilter:;
@end
