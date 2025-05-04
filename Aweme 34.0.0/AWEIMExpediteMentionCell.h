@interface AWEIMExpediteMentionCell : UITableViewCell
@property (nonatomic) AWEIMUser user;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel emptyTipLabel;
- (void)p_setupUI;
- (id)emptyTipLabel;
- (void)setEmptyTipLabel:;
- (id)user;
- (id)accessibilityLabel;
- (void)setUser:;
- (void)setAvatarView:;
- (id)avatarView;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setNameLabel:;
+ (id)identifier;
@end
