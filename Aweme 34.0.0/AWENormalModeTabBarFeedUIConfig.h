@interface AWENormalModeTabBarFeedUIConfig : AWENormalModeTabBarInnerViewUIConfig
@property (nonatomic) UIColor normalTextColor;
@property (nonatomic) UIColor gradientImageColor;
@property (nonatomic) UIImage gradientImage;
@property (nonatomic) UIColor selectedDarkColor;
@property (nonatomic) UIColor selectedLightColor;
@property (nonatomic) UIColor unSelectedDarkColor;
@property (nonatomic) UIColor unSelectedLightColor;
@property (nonatomic) double iconAlpha;
- (void)dealloc;
- (void)setNormalTextColor:;
- (id)normalTextColor;
- (void)updateLightModeWithProgress:;
- (void)setSelectedDarkColor:;
- (void)setSelectedLightColor:;
- (void)setUnSelectedDarkColor:;
- (void)setUnSelectedLightColor:;
- (id)selectedDarkColor;
- (id)unSelectedDarkColor;
- (id)selectedLightColor;
- (id)unSelectedLightColor;
- (id)gradientImageColor;
- (void)setGradientImageColor:;
- (void).cxx_destruct;
- (id)gradientImage;
- (void)setGradientImage:;
+ (id)configWithText:shouldTransform:;
@end
