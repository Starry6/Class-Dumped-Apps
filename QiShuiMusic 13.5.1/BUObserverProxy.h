@interface BUObserverProxy : NSObject
- (id)initWithObserver:observeredObj:;
- (void)proxy_addKeyPath:options:context:;
- (void)proxy_removeObersersWhenObserveredObjectDealloc:;
- (void)proxy_removeObserver:forKeyPath:context:;
- (void)removeSelfOberseringWhenSelfDealloc;
- (void)removeSelfObserveringInfoWithObserveredObject:;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
@end
