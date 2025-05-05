@interface PSSwitchTableCell : PSControlTableCell
@property (nonatomic) BOOL loading;
- (void)setLoading:;
- (void)setSelected:animated:;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:;
- (BOOL)loading;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)canReload;
- (id)controlValue;
- (BOOL)shouldUseModernLayout;
- (void)setCellEnabled:;
- (void)reloadWithSpecifier:animated:;
- (id)newControl;
@end
