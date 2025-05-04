@interface AWEPostPageAnchorCheckCellElement : AWEPostPageCellElement
- (void)bindServices:;
- (void)setupCell:;
- (void)configPlaceholderUI;
- (void)showAnchorLoadingIfNeeded:state:;
- (void)startLoading;
- (void)viewDidAppear:;
- (id)currentCell;
- (BOOL)canSelect;
@end
