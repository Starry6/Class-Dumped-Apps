@interface UIPageControllerScrollView : UIScrollView
@property (nonatomic) UIPageController pageController;
- (void)_scrollViewAnimationEnded:finished:;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setBounds:;
- (void)_scrollViewDidEndDraggingWithDeceleration:;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewDidEndDecelerating;
- (unsigned long long)_abuttedPagingEdges;
- (id)pageController;
- (void)setPageController:;
@end
