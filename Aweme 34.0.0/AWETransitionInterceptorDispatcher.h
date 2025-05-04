@interface AWETransitionInterceptorDispatcher : NSObject
@property (nonatomic) NSHashTable interceptorHashTable;
- (void)registerInterceptor:;
- (void)unregisterInterceptor:;
- (BOOL)fullScreenPanGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)fullScreenPanGestureRecognizer:didEndWithShouldComplete:transitionContext:;
- (id)interceptorHashTable;
- (void)safeEnumerateInterceptorUsingBlock:;
- (void)setInterceptorHashTable:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
