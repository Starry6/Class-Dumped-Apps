@interface LynxUICanvas : LynxUI
- (void)freeMemoryCache;
- (void)targetOffScreen;
- (BOOL)dispatchTouch:touches:withEvent:;
- (BOOL)enableMemoryOptimize;
- (void)targetOnScreen;
- (void)setName:;
- (void).cxx_destruct;
- (id)createView;
- (void)frameDidChange;
+ (void)lynxLazyLoad;
@end
