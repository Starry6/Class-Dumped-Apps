@interface AWEIMShareNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UIView awemeCoverBGView;
@property (nonatomic) UIImageView awemeCoverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
- (id)awemeCoverBGView;
- (id)awemeCoverImageView;
- (void)configWithMessage:;
- (id)menuTargetView;
- (void)setAwemeCoverBGView:;
- (void)setAwemeCoverImageView:;
- (void)tapOnCell:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)menuItems;
- (id)titleLabel;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
