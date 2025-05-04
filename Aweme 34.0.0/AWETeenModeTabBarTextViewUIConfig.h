@interface AWETeenModeTabBarTextViewUIConfig : AWETeenModeTabBarInnerViewUIConfig
@property (nonatomic) UIColor selectedDarkColor;
@property (nonatomic) UIColor selectedLightColor;
@property (nonatomic) UIColor unSelectedDarkColor;
@property (nonatomic) UIColor unSelectedLightColor;
- (void)updateLightModeWithProgress:;
- (void)setSelectedDarkColor:;
- (void)setSelectedLightColor:;
- (void)setUnSelectedDarkColor:;
- (void)setUnSelectedLightColor:;
- (id)selectedDarkColor;
- (id)unSelectedDarkColor;
- (id)selectedLightColor;
- (id)unSelectedLightColor;
- (void).cxx_destruct;
+ (id)configWithText:shouldTransform:;
@end
