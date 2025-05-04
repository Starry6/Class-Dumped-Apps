@interface AWEIMShadowStyleBannerView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXBaseImageView leftIcon;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) UIView rightView;
@property (nonatomic) BOOL needTopAvatarMsgAvoidBanner;
- (void)setLeftIcon:;
- (void)initBannerSubView;
- (void)addBannerSubView;
- (void)updateTitle:image:;
- (BOOL)needTopAvatarMsgAvoidBanner;
- (void)setNeedTopAvatarMsgAvoidBanner:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)titleLabel;
- (id)rightView;
- (void)setRightView:;
- (id)leftIcon;
- (void)updateSize:;
@end
