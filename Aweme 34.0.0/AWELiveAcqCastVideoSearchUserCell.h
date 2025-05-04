@interface AWELiveAcqCastVideoSearchUserCell : UITableViewCell
@property (nonatomic) AWESearchUser model;
@property (nonatomic) UIButton followButton;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView verificationIcon;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UILabel fansLabel;
@property (nonatomic) UILabel nameLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)didClickFollowButton;
- (id)verificationIcon;
- (void)setVerificationIcon:;
- (id)followButton;
- (id)fansLabel;
- (void)setFansLabel:;
- (void)setFollowButton:;
- (void)updateFollowButton:followerStatus:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)updateWithModel:;
@end
