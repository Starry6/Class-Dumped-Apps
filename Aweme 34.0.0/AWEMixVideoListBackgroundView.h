@interface AWEMixVideoListBackgroundView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel mainLabel;
@property (nonatomic) UILabel subLabel;
@property (nonatomic) UIView containerView;
- (void)switchToBackgroundType:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (id)mainLabel;
- (void)setMainLabel:;
- (void)setSubLabel:;
- (id)subLabel;
@end
