@interface BDPolicyEventCenter : NSObject
@property (nonatomic) NSMutableDictionary map;
@property (nonatomic) NSMutableDictionary registerSubscribers;
@property (nonatomic) NSMutableArray allEventSubscribers;
@property (nonatomic) NSObject<OS_dispatch_queue> eventQueue;
- (void)_removeSubscriber:forEventType:;
- (void)_addSubscriber:forEventTypes:;
- (void)_removeAllSubscribers;
- (void)addSubscriber:forEventType:;
- (void)addSubscriber:forEventTypes:;
- (void)addSubscriberForAllEvent:;
- (id)allEventSubscribers;
- (id)registerSubscribers;
- (void)removeAllSubscribers;
- (void)removeSubscriber:forEventType:;
- (void)setAllEventSubscribers:;
- (void)setRegisterSubscribers:;
- (void)setEventQueue:;
- (id)eventQueue;
- (id)init;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
- (void)dispatchEvent:;
- (void)_dispatchEvent:;
+ (id)identifierForSubscriber:eventType:;
+ (id)sharedInstance;
@end
