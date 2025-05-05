@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer
- (void)clearTimer;
- (void)dealloc;
- (void)touchesBegan:withEvent:;
- (void)sendDelayedTouches;
- (id)_clientView;
- (void)sendTouchesShouldBeginForDelayedTouches:;
- (void).cxx_destruct;
- (BOOL)_shouldMakeTimerForDelayedContentTouches:;
- (void)_resetGestureRecognizer;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)sendTouchesShouldBeginForTouches:withEvent:;
- (void)touchesCancelled:withEvent:;
+ (BOOL)_shouldDefaultToTouches;
@end
