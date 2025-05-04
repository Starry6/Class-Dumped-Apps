@interface AWEPOISelectableSearchScopeTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectedIconImageView;
- (void)configWithTitle:;
- (id)selectedIconImageView;
- (void)setSelectedIconImageView:;
- (void)setSelectionState:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
+ (id)identifier;
@end
