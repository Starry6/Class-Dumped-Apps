@interface AWEOpenPlatformMutleUserCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel mobileLabel;
@property (nonatomic) UIImageView checkImageView;
@property (nonatomic) UIView separatorLine;
- (void)updateCheckStatus:;
- (void)updateWithUserInfoItem:;
- (void)updateToAddUserStyle;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
- (id)avatarImageView;
- (id)checkImageView;
- (void)setAvatarImageView:;
- (void)setCheckImageView:;
- (id)separatorLine;
- (void)setSeparatorLine:;
- (void)setMobileLabel:;
- (id)mobileLabel;
@end
