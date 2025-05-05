@interface PSSpinnerTableCell : PSTableCell
@property (nonatomic) UIActivityIndicatorView spinner;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:;
- (id)spinner;
- (void).cxx_destruct;
@end
