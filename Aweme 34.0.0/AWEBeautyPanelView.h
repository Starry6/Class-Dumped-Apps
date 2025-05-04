@interface AWEBeautyPanelView : UIView
@property (nonatomic) AWEBeautyPanelViewConfig config;
@property (nonatomic) UIVisualEffectView blurEffectView;
@property (nonatomic) UIView bgView;
- (void)p_setupBgView;
- (void)p_updateCornerRadius;
- (void)p_setupBlurBackground;
- (void)setConfig:;
- (BOOL)pointInside:withEvent:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (id)blurEffectView;
- (void)setBlurEffectView:;
@end
