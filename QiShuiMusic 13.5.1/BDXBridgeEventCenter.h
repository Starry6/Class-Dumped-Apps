@interface BDXBridgeEventCenter : NSObject
@property (nonatomic) NSMutableDictionary eventSubscribers;
@property (nonatomic) <NSLocking> eventSubscribersLock;
@property (nonatomic) NSMutableArray eventQueue;
@property (nonatomic) NSLock eventQueueLock;
@property (nonatomic) @? receiveBroadcastHandler;
@property (nonatomic) double effectiveDuration;
- (void)cleanExpiredEvent;
- (id)eventQueueLock;
- (id)eventSubscribers;
- (id)eventSubscribersLock;
- (void)publishEvent:;
- (id)receiveBroadcastHandler;
- (void)setEffectiveDuration:;
- (void)setEventQueueLock:;
- (void)setEventSubscribers:;
- (void)setEventSubscribersLock:;
- (void)setReceiveBroadcastHandler:;
- (void)subscribeEventNamed:withSubscriber:;
- (void)unsubscribeEventNamed:withSubscriber:;
- (void)setEventQueue:;
- (id)eventQueue;
- (id)init;
- (double)effectiveDuration;
- (void).cxx_destruct;
+ (id)sharedCenter;
@end
