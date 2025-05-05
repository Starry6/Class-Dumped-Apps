@interface DanceUI.ScrollViewHelper : NSObject
- (void)scrollViewDidEndDecelerating:;
- (id)init;
- (void)scrollViewWillBeginDecelerating:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)scrollViewDidScrollToTop:;
@end
