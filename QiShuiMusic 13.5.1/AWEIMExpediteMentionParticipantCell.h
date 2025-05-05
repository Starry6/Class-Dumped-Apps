@interface AWEIMExpediteMentionParticipantCell : UITableViewCell
@property (nonatomic) IESIMSaaSAWEIMUser user;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
- (void)p_setupUI;
- (void)setUser:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (void)refreshUI;
- (id)user;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
+ (id)identifier;
@end
