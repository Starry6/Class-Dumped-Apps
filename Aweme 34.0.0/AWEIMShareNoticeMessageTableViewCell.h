@interface AWEIMShareNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UIView awemeCoverBGView;
@property (nonatomic) UIImageView awemeCoverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
- (void)configWithMessage:;
- (id)menuTargetView;
- (void)tapOnCell:;
- (id)awemeCoverImageView;
- (void)setAwemeCoverImageView:;
- (id)awemeCoverBGView;
- (void)setAwemeCoverBGView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)menuItems;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
