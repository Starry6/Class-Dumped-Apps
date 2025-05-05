@interface BDXCategoryNumberCell : BDXCategoryTitleCell
@property (nonatomic) NSLayoutConstraint numberCenterXConstraint;
@property (nonatomic) NSLayoutConstraint numberCenterYConstraint;
@property (nonatomic) NSLayoutConstraint numberHeightConstraint;
@property (nonatomic) NSLayoutConstraint numberWidthConstraint;
@property (nonatomic) UILabel numberLabel;
- (id)numberCenterXConstraint;
- (id)numberCenterYConstraint;
- (id)numberHeightConstraint;
- (id)numberWidthConstraint;
- (void)setNumberCenterXConstraint:;
- (void)setNumberCenterYConstraint:;
- (void)setNumberHeightConstraint:;
- (void)setNumberWidthConstraint:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)reloadData:;
- (void)initializeViews;
- (id)numberLabel;
- (void)setNumberLabel:;
@end
