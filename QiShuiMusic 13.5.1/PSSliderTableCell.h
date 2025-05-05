@interface PSSliderTableCell : PSControlTableCell
- (void)refreshCellContentsWithSpecifier:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)canReload;
- (id)titleLabel;
- (id)controlValue;
- (id)newControl;
- (void)_configureLayout;
@end
