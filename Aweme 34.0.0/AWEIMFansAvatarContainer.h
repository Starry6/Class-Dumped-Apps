@interface AWEIMFansAvatarContainer : AWEIMFansBaseContainer
@property (nonatomic) UIImageView verificationIcon;
@property (nonatomic) UIView dotView;
@property (nonatomic) UIImageView avatarView;
- (void)configWithViewModel:;
- (id)verificationIcon;
- (void)setVerificationIcon:;
- (id)placeHolderAvatarImage;
- (void)tapOnAvatar:;
- (void)hideDotView:;
- (void)setAvatarView:;
- (id)avatarView;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
- (void)setupViews;
@end
