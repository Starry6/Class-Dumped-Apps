@interface AWEIMCoverImageCardPresenter : AWEIMUIViewPresenter
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)willUnBindView:;
- (void)onCellWillPrepareForReuse;
@end
