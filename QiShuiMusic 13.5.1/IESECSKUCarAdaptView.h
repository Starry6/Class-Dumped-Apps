@interface IESECSKUCarAdaptView : UIStackView
@property (nonatomic) IESECSKUCarAdaptViewModel viewModel;
@property (nonatomic) UIView separator;
@property (nonatomic) IESECUIImageView icon;
@property (nonatomic) UILabel discptionLabel;
@property (nonatomic) UILabel carNameLabel;
@property (nonatomic) UILabel changeCarLabel;
@property (nonatomic) IESECUIImageView arrowImage;
- (id)carNameLabel;
- (id)changeCarLabel;
- (id)discptionLabel;
- (void)setCarNameLabel:;
- (void)setChangeCarLabel:;
- (void)setDiscptionLabel:;
- (void)setSeparator:;
- (id)viewModel;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)separator;
- (void)setupUI;
- (id)arrowImage;
- (void)setArrowImage:;
@end
