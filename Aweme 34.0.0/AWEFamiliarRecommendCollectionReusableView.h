@interface AWEFamiliarRecommendCollectionReusableView : DUXBaseCollectionReusableView
@property (nonatomic) DUXBaseLabel label;
@property (nonatomic) AFDRecommendVisibilitySettingHintView settingHintView;
- (void)awe_themeReload;
- (id)settingHintView;
- (void)setSettingHintView:;
- (void)p_updateLabelWithContent:;
- (void)configLabelWithContent:isShouldShowHeader:;
- (void)setLabel:;
- (id)textFont;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)textColor;
@end
