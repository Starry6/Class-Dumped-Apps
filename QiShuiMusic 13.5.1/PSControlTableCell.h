@interface PSControlTableCell : PSTableCell
@property (nonatomic) UIControl control;
- (void)dealloc;
- (void)refreshCellContentsWithSpecifier:;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void).cxx_destruct;
- (BOOL)canReload;
- (id)valueLabel;
- (id)control;
- (void)setControl:;
- (id)controlValue;
- (void)setCellEnabled:;
- (id)newControl;
- (void)controlChanged:;
@end
