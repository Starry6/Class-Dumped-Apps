@interface PSCapacityBarCell : PSTableCell
- (id)initWithStyle:reuseIdentifier:;
- (void)refreshCellContentsWithSpecifier:;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)initializeViews;
- (void)createNormalConstraints;
- (void)createLargeConstraints;
- (void)createCommonConstraints;
- (void)addVerticalLegends;
- (void)addHorizontalLegends;
- (void)createLegends:;
- (id)usageString:;
+ (id)specifierWithTitle:;
+ (id)specifierWithTitle:useStandardFontSizeForSizeLabel:;
@end
