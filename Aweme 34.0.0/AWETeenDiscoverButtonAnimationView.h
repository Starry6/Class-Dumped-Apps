@interface AWETeenDiscoverButtonAnimationView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) BDImageView iconView;
@property (nonatomic) UIView dotView;
- (id)p_addIconLayer;
- (void)configWithIconURL:showIcon:showYellowDot:;
- (id)init;
- (id)contentView;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)dotView;
- (void)setDotView:;
@end
