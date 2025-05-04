@interface AWETrustAccountSingleView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nickLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) DUXTextTag lastLoginTag;
@property (nonatomic) DYLoginNextActionButton loginButton;
- (id)descLabel;
- (void)setDescLabel:;
- (id)nickLabel;
- (void)setNickLabel:;
- (void)stopLoadingWithError:;
- (void)setupUIWithUser:showLastTag:isHalfScreen:;
- (void)setLastLoginTag:;
- (id)lastLoginTag;
- (id)initWithUser:showLastTag:isHalfScreen:;
- (void)willShowAnimationIsLogin:;
- (void)setAvatarView:;
- (id)containerView;
- (id)avatarView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setLoginButton:;
- (id)loginButton;
@end
