@interface BNPlay.CyclePageView : UIView
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewWillBeginDecelerating:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
