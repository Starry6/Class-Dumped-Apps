@interface AWEIMLocalFansGroupCardMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIView cardView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
- (void)chatBackgroundDidChangeNty:;
- (void)configWithMessage:;
- (id)defaultSubTitleStr;
- (void)localFansGroupCardMessageCellTapped;
- (void)configImageViewWithURL:placeholder:;
- (void)updateTitleLabel:subTitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (id)avatarImageView;
- (id)cardView;
- (void)setAvatarImageView:;
- (void)setCardView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
+ (double)localFansGroupCardMessageCellHeight;
@end
