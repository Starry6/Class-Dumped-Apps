@interface LynxEngineProxy : NSObject
- (void)invokeLepusFunc:callbackID:;
- (void)onPseudoStatusChanged:fromPreStatus:toCurrentStatus:;
- (void)sendCustomEvent:;
- (void)sendGestureEvent:event:;
- (void)sendSyncMultiTouchEvent:;
- (void)sendSyncTouchEvent:;
- (void)setNativeEngineProxy:;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
