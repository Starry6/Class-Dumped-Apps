@interface AWEIMVideoCommentAlertTopView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) IESIMUserNameLabel userNameLabel;
@property (nonatomic) UIView separateView;
@property (nonatomic) UIImageView verifiedLogoView;
@property (nonatomic) UILabel commentLabel;
- (void)configWithAweme:withComment:;
- (void)p_setupUI;
- (id)p_verifyBadgeImageByUser:;
- (id)separateView;
- (void)setSeparateView:;
- (void)setUserNameLabel:;
- (void)setVerifiedLogoView:;
- (id)userNameLabel;
- (id)verifiedLogoView;
- (id)init;
- (void)setTitleLabel:;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)commentLabel;
- (void)setCommentLabel:;
@end
