@interface AWEDCFeedSkeletonUIConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enable;
@property (nonatomic) double animationAlphaDark;
@property (nonatomic) double animationAlphaLight;
- (double)animationAlphaDark;
- (void)setAnimationAlphaDark:;
- (double)animationAlphaLight;
- (void)setAnimationAlphaLight:;
- (BOOL)enable;
- (void)setEnable:;
@end
