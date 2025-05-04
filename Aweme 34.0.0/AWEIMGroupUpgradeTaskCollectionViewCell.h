@interface AWEIMGroupUpgradeTaskCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMGroupUpgradeTaskViewModel viewModel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView tailIconImageView;
@property (nonatomic) UIView lineView;
- (void)configWithViewModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)__setupUI;
- (id)tailIconImageView;
- (id)__baseContentView;
- (void)setTailIconImageView:;
- (void)updateCorners:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
+ (id)identifier;
@end
