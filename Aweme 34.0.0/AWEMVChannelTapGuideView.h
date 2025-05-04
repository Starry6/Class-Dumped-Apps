@interface AWEMVChannelTapGuideView : UIView
@property (nonatomic) LOTAnimationView imageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) BOOL isShowing;
- (void)removeSelf;
- (void)showAnimation;
- (id)textLabel;
- (BOOL)isShowing;
- (id)initWithFrame:;
- (id)containerView;
- (id)initWithContext:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setTextLabel:;
- (void)setupUI;
- (void)setIsShowing:;
@end
