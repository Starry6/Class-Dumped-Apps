@interface AWEFeedSlidingViewController : AWEHPSlidingViewController
@property (nonatomic) <AWEFeedSlidingViewControllerDelegate> homepageDelegate;
@property (nonatomic) @? beginTransitionBlock;
@property (nonatomic) @? beginDraggingBlock;
- (void)correctSelectedIndexIfNeededWithScrollView:;
- (Class)scrollViewClass;
- (id)homepageDelegate;
- (void)correctSelectLine:;
- (void)scrollToIndex:animated:isByTap:;
- (id)initWithSelectedIndex:homepageDelegate:;
- (id)beginTransitionBlock;
- (id)beginDraggingBlock;
- (void)setBeginTransitionBlock:;
- (void)setBeginDraggingBlock:;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
@end
