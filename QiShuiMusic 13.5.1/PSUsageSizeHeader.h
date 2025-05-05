@interface PSUsageSizeHeader : UITableViewHeaderFooterView
@property (nonatomic) UILabel sizeLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIStackView _internalStackView;
- (void)setTitleLabel:;
- (double)preferredHeightForWidth:inTableView:;
- (void).cxx_destruct;
- (id)initWithSpecifier:;
- (id)titleLabel;
- (void)setSize:;
- (id)sizeLabel;
- (void)setSizeLabel:;
- (void)_setupSubviewsAndConstraints;
- (void)setSizeLabelHidden:;
- (id)_internalStackView;
- (void)set_internalStackView:;
@end
