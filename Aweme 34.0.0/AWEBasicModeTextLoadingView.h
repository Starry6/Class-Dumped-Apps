@interface AWEBasicModeTextLoadingView : UIView
@property (nonatomic) UIView hudView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView containerView;
- (void)allowUserInteraction:;
- (void)stopAnimating;
- (id)init;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)containerView;
- (id)loadingView;
- (void)dismiss;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)startAnimating;
- (void)setTitle:;
- (void)setupUI;
- (id)hudView;
- (void)setHudView:;
+ (id)p_imageWithColor:;
+ (id)sharedView;
+ (id)showLoadingOnView:title:;
@end
