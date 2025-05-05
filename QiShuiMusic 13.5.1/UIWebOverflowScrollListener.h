@interface UIWebOverflowScrollListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidEndDecelerating:;
- (id)initWithScrollView:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidScrollToTop:;
- (void)_didCompleteScrolling;
@end
