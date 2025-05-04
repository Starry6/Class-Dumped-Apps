@interface AWEDCFeedShimmerViewUIConfig : NSObject
@property (nonatomic) Q themeStyle;
@property (nonatomic) double animationAlphaDark;
@property (nonatomic) double animationAlphaLight;
- (void)setThemeStyle:;
- (double)animationAlphaDark;
- (void)setAnimationAlphaDark:;
- (double)animationAlphaLight;
- (void)setAnimationAlphaLight:;
- (unsigned long long)themeStyle;
@end
