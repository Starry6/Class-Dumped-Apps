@interface AWELunaUgCommentStylePopViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UILabel createTimeLabel;
@property (nonatomic) YYLabel commentContentLabel;
@property (nonatomic) UIImageView diggIcon;
@property (nonatomic) UILabel diggCountLabel;
@property (nonatomic) <AWELunaUgCommentStylePopViewCellDelegate> delegate;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (void)configSubviews;
- (id)commentContentLabel;
- (id)diggCountLabel;
- (void)setCommentContentLabel:;
- (void)setDiggCountLabel:;
- (id)diggIcon;
- (void)setDiggIcon:;
- (void)p_didClickContent;
- (id)createTimeLabel;
- (void)p_didClickDigg;
- (void)updateWithContent:avatar:author:createTime:diggCount:;
- (void)setCreateTimeLabel:;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
