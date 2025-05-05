@interface IESECSKUCarAdaptCell : UICollectionViewCell
@property (nonatomic) UIView separator;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESECUIImageView icon;
@property (nonatomic) UILabel discptionLabel;
@property (nonatomic) UILabel carNameLabel;
@property (nonatomic) UILabel changeCarLabel;
@property (nonatomic) IESECUIImageView arrowImage;
@property (nonatomic) IESECSKUCarAdaptViewModel viewModel;
- (id)carNameLabel;
- (id)changeCarLabel;
- (id)discptionLabel;
- (void)setCarNameLabel:;
- (void)setChangeCarLabel:;
- (void)setDiscptionLabel:;
- (void)setSeparator:;
- (id)viewModel;
- (void)setTitleLabel:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)titleLabel;
- (id)separator;
- (void)setupUI;
- (id)arrowImage;
- (void)setArrowImage:;
@end
