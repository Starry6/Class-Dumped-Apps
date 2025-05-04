@interface AWENearbyCollectionController : AWEWaterFallCollectionController
@property (nonatomic) <UIScrollViewDelegate> scrollDelegate;
@property (nonatomic) BOOL isScrolling;
- (id)constData;
- (void)setIsScrolling:;
- (id)scrollDelegate;
- (id)store;
- (BOOL)scrollViewShouldScrollToTop:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (BOOL)isScrolling;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setScrollDelegate:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
@end
