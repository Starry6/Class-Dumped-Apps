@interface AWEAnchorNotificationSettingViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) q uid;
@property (nonatomic) q pushStatus;
- (long long)pushStatus;
- (void)setPushStatus:;
- (void)setUid:;
- (void)setAvatarView:;
- (long long)uid;
- (id)initWithFrame:;
- (id)iconView;
- (id)avatarView;
- (void)setIconView:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
@end
