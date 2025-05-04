@interface AWEUIAccountStatusTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) double minimumCellHeight;
- (id)descLabel;
- (void)setDescLabel:;
- (void)configWithDescLabelText:;
- (void)layoutContentViewWithHeaderHeight:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (double)minimumCellHeight;
- (void)setMinimumCellHeight:;
@end
