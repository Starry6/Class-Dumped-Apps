@interface IESLiveInteractionChatGroupUserCell : UITableViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIView avatarBorderView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
- (id)avatarBorderView;
- (void)renderUser:;
- (void)setAvatarBorderView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setupConstraints;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)setupViews;
- (void)setDetailLabel:;
@end
