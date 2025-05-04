@interface AWESearchGradientBackgroundView : UIView
@property (nonatomic) float scrollAlpha;
@property (nonatomic) BOOL shouldShown;
- (void)awe_themeReload;
- (void)forceHideBackground:;
- (void)renewThemeStyle;
- (void)updateGradientColor:centerColor:;
- (void)updateFullScreenGradientColor:centerColor:;
- (void)updateGradientColorForAd:;
- (float)scrollAlpha;
- (void)setScrollAlpha:;
- (BOOL)shouldShown;
- (void)setShouldShown:;
- (void)setAlpha:;
- (id)init;
- (id)initWithFrame:;
+ (Class)layerClass;
@end
