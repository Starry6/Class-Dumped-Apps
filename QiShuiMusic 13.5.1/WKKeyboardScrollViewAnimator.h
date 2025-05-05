@interface WKKeyboardScrollViewAnimator : NSObject
@property (nonatomic) <WKKeyboardScrollViewAnimatorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentOffset;
- (void)handleKeyEvent:;
- (BOOL)beginWithEvent:;
- (BOOL)scrollTriggeringKeyIsPressed;
- (void)scrollWithScrollToExtentAnimationTo:;
- (void)didFinishScrolling;
- (id)boundedContentOffset:;
- (id)init;
- (void)dealloc;
- (BOOL)isKeyboardScrollable;
- (void)scrollToContentOffset:animated:;
- (id)initWithScrollView:;
- (void)setDelegate:;
- (void)willStartInteractiveScroll;
- (double)distanceForIncrement:inDirection:;
- (id)scrollableDirectionsFromOffset:;
- (id)rubberbandableDirections;
- (id)delegate;
- (id)interactiveScrollVelocity;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
@end
