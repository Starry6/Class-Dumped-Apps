@interface AWELeftSideBaCollectionHeaderView : UICollectionReusableView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) double horizontalPadding;
- (void)setSeparatorLineViewHidden:;
- (void)updateWithHorizontalPadding:;
- (id)initWithFrame:;
- (id)contentView;
- (double)horizontalPadding;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)lineView;
- (void)setHorizontalPadding:;
- (void)setLineView:;
- (void)setupUI;
- (void)updateTitleFont:;
- (void)updateTitle:;
+ (double)titleLabelHeight;
+ (double)collectionHeaderViewHeight;
+ (double)bottomPadding;
@end
