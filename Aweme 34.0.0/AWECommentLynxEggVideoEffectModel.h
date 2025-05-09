@interface AWECommentLynxEggVideoEffectModel : AWEBaseApiModel
@property (nonatomic) Q effectID;
@property (nonatomic) NSString videoSrc;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) Q loopCount;
@property (nonatomic) BOOL isAutoplay;
@property (nonatomic) Q videoHeight;
@property (nonatomic) Q videoWidth;
@property (nonatomic) Q effectType;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) NSString surpriseType;
@property (nonatomic) AWECommentLynxEggDefaultInputConfig defaultInputConfig;
@property (nonatomic) AWECommentLynxEggImageCommentSurpriseConfig imageCommentSurpriseConfig;
- (id)surpriseType;
- (id)jumpUrl;
- (id)imageCommentSurpriseConfig;
- (id)defaultInputConfig;
- (void)setJumpUrl:;
- (void)setIsLoop:;
- (void)setEffectID:;
- (id)videoSrc;
- (void)setVideoSrc:;
- (BOOL)isAutoplay;
- (void)setIsAutoplay:;
- (void)setSurpriseType:;
- (void)setDefaultInputConfig:;
- (void)setImageCommentSurpriseConfig:;
- (BOOL)isLoop;
- (void)setVideoWidth:;
- (void)setVideoHeight:;
- (unsigned long long)videoWidth;
- (void).cxx_destruct;
- (unsigned long long)videoHeight;
- (unsigned long long)effectType;
- (void)setEffectType:;
- (unsigned long long)loopCount;
- (unsigned long long)effectID;
- (void)setLoopCount:;
+ (id)defaultInputConfigJSONTransformer;
+ (id)imageCommentSurpriseConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
