@interface AWECommentSearchCell : UITableViewCell
@property (nonatomic) <AWECommentSearchCellDelegate> delegate;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView verifyBadgeView;
@property (nonatomic) AWEUserNameLabel nameLabel;
@property (nonatomic) AWEButton messageBtn;
@property (nonatomic) AWEUserModel user;
- (id)verifyBadgeView;
- (id)messageBtn;
- (void)p_sendMessageToUser;
- (void)configWithUser:isDefaultSearch:currentInputText:;
- (void)setVerifyBadgeView:;
- (void)setMessageBtn:;
- (id)user;
- (void)setUser:;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)p_init;
+ (id)defaultAvatarImage;
+ (id)identifier;
@end
