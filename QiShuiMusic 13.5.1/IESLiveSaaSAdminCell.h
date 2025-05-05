@interface IESLiveSaaSAdminCell : UITableViewCell
@property (nonatomic) IESLiveSaaSAdminCellItem item;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIView redDotView;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) BOOL enableAdminOptimize;
- (void)renderWithItem:;
- (BOOL)enableAdminOptimize;
- (id)redDotView;
- (void)setEnableAdminOptimize:;
- (void)setRedDotView:;
- (id)initWithStyle:reuseIdentifier:;
- (id)item;
- (void)setTitleLabel:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowView;
- (void)setArrowView:;
- (id)detailLabel;
- (void)setConstraints;
- (void)setDetailLabel:;
@end
