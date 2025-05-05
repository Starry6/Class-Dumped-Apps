@interface BSUIScrollView : UIScrollView
@property (nonatomic) BOOL scrolling;
@property (nonatomic) {?=q{CGPoint=dd}{CGPoint=dd}} currentScrollContext;
@property (nonatomic) <BSUIScrollViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContentOffset:;
- (void)dealloc;
- (void)setContentOffset:animated:;
- (void)setDelegate:;
- (void)_notifyDidScroll;
- (BOOL)setContentOffset:withAnimationSettings:completion:;
- (BOOL)isScrolling;
- (void)_willBeginDraggingNotification:;
- (id)initWithFrame:;
- (void)_bs_willBeginScrolling;
- (id)currentScrollContext;
- (id)delegate;
- (void)_didEndScrollAnimationNotification:;
- (void).cxx_destruct;
- (void)_bs_didScrollWithContext:;
- (void)_setContentOffset:animation:;
- (void)_didEndDraggingNotification:;
- (void)_bs_didEndScrolling;
- (BOOL)setContentOffset:animated:completion:;
- (void)_didDidEndDeceleratingNotification:;
@end
