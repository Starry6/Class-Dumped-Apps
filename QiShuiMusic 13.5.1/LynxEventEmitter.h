@interface LynxEventEmitter : NSObject
- (BOOL)shouldIntercept;
- (BOOL)bdx_dispatchTouchEvent:target:;
- (void)dispatchCustomEvent:;
- (void)dispatchGestureEvent:event:;
- (void)dispatchLayoutEvent;
- (void)dispatchMultiTouchEvent:;
- (BOOL)dispatchTouchEvent:;
- (void)dispatchTouchEventToOutterContainer:;
- (id)getKitView;
- (id)initWithLynxEngineProxy:;
- (void)notifyEventObservers:event:;
- (void)notifyIntersectionObserver;
- (BOOL)onLynxEvent:;
- (void)onPseudoStatusChanged:fromPreStatus:toCurrentStatus:;
- (void)sendCustomEvent:;
- (void)setEventReporterBlock:;
- (void)setIntersectionObserverBlock:;
- (void)removeObserver:;
- (void)addObserver:;
- (void).cxx_destruct;
+ (void)prepareIntercept;
@end
