@interface PSSubtitleDisclosureTableCell : PSTableCell
@property (nonatomic) UILabel valueLabel;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (BOOL)canReload;
- (id)valueLabel;
- (void)setValueLabel:;
- (void)_valueLabelForSpecifier:;
+ (long long)cellStyle;
@end
