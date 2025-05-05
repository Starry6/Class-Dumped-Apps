@interface CNPhotoPickerSectionHeader : UICollectionReusableView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) @? actionBlock;
- (void)setupConstraints;
- (void)updateStyle:;
- (void)setStackView:;
- (id)actionBlock;
- (void)prepareForReuse;
- (id)stackView;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)actionButton;
- (void)setActionBlock:;
- (void)actionButtonPressed:;
- (void)updateDynamicStackViewProperties;
+ (id)titleLabelFont;
+ (id)actionButtonFont;
+ (id)reusableIdentifier;
+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:;
@end
