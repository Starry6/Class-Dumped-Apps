@interface AWEIMHalfScreenCurrentGroupTableViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView nextTapImageView;
@property (nonatomic) UILabel countLabel;
- (void)configWithShareModel:;
- (id)nextTapImageView;
- (void)p_setupUI;
- (void)setNextTapImageView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setHighlighted:animated:;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)countLabel;
- (void)setCountLabel:;
+ (id)identifier;
@end
