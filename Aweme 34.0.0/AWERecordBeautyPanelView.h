@interface AWERecordBeautyPanelView : UIView
@property (nonatomic) AWERecordBeautyPanelViewConfig config;
@property (nonatomic) UIView bgView;
@property (nonatomic) UIVisualEffectView blurEffectView;
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
