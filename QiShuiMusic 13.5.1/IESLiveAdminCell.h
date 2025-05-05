@interface IESLiveAdminCell : UITableViewCell
@property (nonatomic) IESLiveAdminCellItem item;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIView redDotView;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) BOOL isWhite;
- (void)renderWithItem:;
- (id)redDotView;
- (void)setIsWhite:;
- (void)setRedDotView:;
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)isWhite;
- (id)item;
- (void)setTitleLabel:;
- (void)setDescriptionLabel:;
- (void)setItem:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowView;
- (void)setArrowView:;
- (id)detailLabel;
- (void)setConstraints;
- (void)setDetailLabel:;
@end
