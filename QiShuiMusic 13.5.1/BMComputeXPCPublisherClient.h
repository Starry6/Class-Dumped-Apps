@interface BMComputeXPCPublisherClient : NSObject
@property (nonatomic) NSMutableDictionary subscriptions;
@property (nonatomic) NSMutableDictionary pendingEvents;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pendingEvents;
- (id)init;
- (void)dealloc;
- (id)subscriptions;
- (void)_handleEventWithPayload:;
- (void)subscribe:;
- (id)connection;
- (void).cxx_destruct;
- (void)_setXPCEvent:identifier:;
- (void)unsubscribeWithIdentifier:;
- (id)queue;
- (id)initWithQueue:listenerEndpoint:;
- (void)receiveInputForIdentifier:streamIdentifier:storeEvent:;
+ (id)new;
+ (id)shared;
+ (void)_initializeSharedClientWithQueue:;
+ (void)_setQueue:;
@end
