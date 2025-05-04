@interface AWEIMGroupInviteBubbleMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UIImageView groupOwnerAvatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)groupOwnerAvatarView;
- (void)__updateColor;
- (void)__bubbleViewTapped:;
- (void)setGroupOwnerAvatarView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)menuItems;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
