@interface AWEInteractionNoticeBaseCellController : AWEBaseListCellController
- (id)zoomTransitionStartViewForOffset:;
- (id)customIMStreakTextFont;
- (void)willDisplayCell:;
- (void)configCell:;
- (BOOL)cf_canShowColorRingWithRingStatus:;
- (id)cf_transitionTargetView;
- (void)cf_colorRingViewVisibleStatusChanged;
- (id)zoomTransitionStartView;
- (void)didBindCellViewModel;
- (id)sizeForItemWithCollectionViewSize:;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)didSelectItem;
@end
