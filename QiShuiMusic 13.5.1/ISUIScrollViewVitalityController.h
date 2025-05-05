@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController
@property (nonatomic) UIScrollView _scrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidEndZooming:withView:atScale:;
- (void)scrollViewDidEndDecelerating:;
- (id)init;
- (id)_scrollView;
- (void)scrollViewWillBeginDecelerating:;
- (void)_setScrollView:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (BOOL)scrollViewShouldScrollToTop:;
- (BOOL)canPerformVitality;
- (void)scrollViewWillBeginZooming:withView:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)_reduceMotionDidChange:;
- (id)visibilityOffsetHelper;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)scrollViewDidZoom:;
- (void)scrollViewDidScrollToTop:;
@end
