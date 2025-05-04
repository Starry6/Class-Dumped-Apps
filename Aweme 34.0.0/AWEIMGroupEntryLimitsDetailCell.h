@interface AWEIMGroupEntryLimitsDetailCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) AWEIMCardStyleCellContainerView containerView;
@property (nonatomic) UIView lineView;
@property (nonatomic) BOOL useCardStyle;
- (id)baseContentView;
- (void)configWithTitle:detailTitle:;
- (void)setUseCardStyle:;
- (BOOL)useCardStyle;
- (void)configWithCellCornerType:shouldShowLineAtCellBottom:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
