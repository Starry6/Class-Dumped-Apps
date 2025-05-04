@interface AWEFamiliarTabSlidingViewController : AWESlidingViewController
- (Class)scrollViewClass;
- (void)correctSelectLine:;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidEndDragging:willDecelerate:;
@end
