@interface IESECSKUNewHeaderCell : UICollectionViewCell
@property (nonatomic) UIStackView mainStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel sizeAssistantLabel;
@property (nonatomic) IESECUIImageView sizeArrow;
@property (nonatomic) IESECUIImageView swicthSpecButton;
@property (nonatomic) IESECUIImageView dashline;
@property (nonatomic) IESECSKUCarAdaptView carView;
@property (nonatomic) IESECSKUNewHeaderViewModel viewModel;
@property (nonatomic) <IESECSKUNewHeaderCellDelegate> delegate;
- (id)dashline;
- (void)setDashline:;
- (void)setSizeArrow:;
- (void)setSizeAssistantLabel:;
- (void)setSwicthSpecButton:;
- (id)sizeArrow;
- (id)sizeAssistantLabel;
- (id)swicthSpecButton;
- (void)tagCarAdapt;
- (void)tappedSizeComponent;
- (void)tappedSpecSwitch;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setupUI;
- (void)updateUI;
- (id)mainStackView;
- (void)setMainStackView:;
- (id)carView;
- (void)setCarView:;
+ (id)getHeaderSizeWithBoundingSize:viewModel:;
@end
