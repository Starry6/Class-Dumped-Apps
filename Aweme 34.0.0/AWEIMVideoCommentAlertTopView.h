@interface AWEIMVideoCommentAlertTopView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) AWEUserNameLabel userNameLabel;
@property (nonatomic) UIView separateView;
@property (nonatomic) UIImageView verifiedLogoView;
@property (nonatomic) UILabel commentLabel;
- (void)p_setupUI;
- (void)setSeparateView:;
- (id)separateView;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (id)verifiedLogoView;
- (void)setVerifiedLogoView:;
- (void)configWithAweme:withComment:;
- (id)p_verifyBadgeImageByUser:;
- (id)init;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)commentLabel;
- (void)setCommentLabel:;
@end
