@interface AWEIMMessageListBackgroundView : UIImageView
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) CAGradientLayer topGradientLayer;
- (void)setTopGradientLayer:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)themeChanged;
- (void)p_updateOverlayer:;
- (void)p_topGradientLayerSetColors:;
- (void)setImage:;
- (id)initWithFrame:;
- (void)setFrame:;
- (void).cxx_destruct;
- (id)topGradientLayer;
@end
