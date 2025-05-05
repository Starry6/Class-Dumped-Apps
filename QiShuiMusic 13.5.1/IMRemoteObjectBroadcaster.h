@interface IMRemoteObjectBroadcaster : NSObject
- (id)init;
- (void)dealloc;
- (id)broadcastProxyForTarget:messageContext:protocol:priority:completion:;
- (id)broadcastProxyForTarget:messageContext:protocol:priority:;
- (void)blockUntilSendQueueIsEmpty;
- (void)flushProxy:;
- (id)broadcastProxyForTargets:messageContext:protocol:;
- (id)broadcastProxyForTarget:messageContext:protocol:;
- (id)_queue;
+ (id)defaultBroadcaster;
@end
