@interface AWEListenFeedButton : UIButton
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView defaultView;
@property (nonatomic) UIImageView selectedView;
@property (nonatomic) Q buttonStatus;
- (void)setSelectedView:;
- (void)setDefaultView:;
- (unsigned long long)buttonStatus;
- (void)setButtonStatus:;
- (void)performAnimationWithFromView:toView:;
- (void)changeStatusWithoutAnimationWithFromView:toView:;
- (id)initWithDefaultImage:selectedImage:;
- (void)changeButtonTypeWithAnimation:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)selectedView;
- (id)defaultView;
@end
