@interface AWEIMHighlyProspectiveRecommendEmptyTableViewCell : UITableViewCell
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
- (void)__setupUI;
- (void)__setupLayout;
- (void)renderWithTitle:subTitle:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
