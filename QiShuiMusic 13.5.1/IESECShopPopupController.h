@interface IESECShopPopupController : IESECRelationController
@property (nonatomic) BOOL popupConflict;
@property (nonatomic) <IESECShopPopupScrollingFilter> scrollingFilter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scrollingFilter;
- (void)updatePopupURL:;
- (void)pagerView:tabScrollViewDidEndDecelerating:;
- (void)pagerView:tabScrollViewDidEndDragging:willDecelerate:;
- (void)pagerView:tabScrollViewWillBeginDragging:;
- (BOOL)popupConflict;
- (id)popupOverlayView;
- (void)publishEvent:;
- (void)publishEvent:parameters:;
- (void)publishPopupVisibilityEvent;
- (void)setPopupConflict:;
- (void)setScrollingFilter:;
- (id)init;
- (void)dealloc;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
