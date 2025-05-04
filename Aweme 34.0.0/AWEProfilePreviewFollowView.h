@interface AWEProfilePreviewFollowView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UIButton followButton;
@property (nonatomic) UIButton messageButton;
@property (nonatomic) UIButton recommendButton;
- (id)followButton;
- (void)setFollowButton:;
- (id)recommendButton;
- (void)setRecommendButton:;
- (BOOL)shouldShowMsgBtn;
- (BOOL)shouldShowRecommendBtn;
- (id)imageWithAlpha:image:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setupUI;
- (id)messageButton;
- (void)setMessageButton:;
@end
