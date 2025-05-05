@interface MTLSharedEventListenerInternal : MTLSharedEventListener
- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:;
- (void)_notifyEventPort:event:atValue:block:;
@end
