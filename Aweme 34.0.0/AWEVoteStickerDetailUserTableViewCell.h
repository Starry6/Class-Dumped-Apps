@interface AWEVoteStickerDetailUserTableViewCell : UITableViewCell
@property (nonatomic) AWEUserModel user;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
- (void)configWithUser:darkMode:;
- (id)user;
- (void)setUser:;
- (void)setAvatarView:;
- (id)avatarView;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNameLabel:;
+ (id)identifier;
@end
