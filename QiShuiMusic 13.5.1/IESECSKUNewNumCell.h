@interface IESECSKUNewNumCell : UICollectionViewCell
@property (nonatomic) UIStackView mainStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel stockLabel;
@property (nonatomic) UILabel limitLabel;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) IESECHighlightButton minusButton;
@property (nonatomic) IESECHighlightButton plusButton;
@property (nonatomic) <IESECSKUNumberCellDelegate> delegate;
@property (nonatomic) IESECSKUNumberViewModel viewModel;
- (void)setMinusButton:;
- (id)limitLabel;
- (void)minus;
- (void)plus;
- (void)setLimitLabel:;
- (void)setStockLabel:;
- (id)stockLabel;
- (id)plusButton;
- (void)setPlusButton:;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setupUI;
- (void)setupAccessibility;
- (id)minusButton;
- (id)mainStackView;
- (void)setMainStackView:;
- (id)numberLabel;
- (void)setNumberLabel:;
+ (id)getNumSizeWithBoundingSize:;
@end
