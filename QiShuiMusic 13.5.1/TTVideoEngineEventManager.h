@interface TTVideoEngineEventManager : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) NSMutableArray latestEvents;
@property (nonatomic) q eventVersion;
@property (nonatomic) NSObject<OS_dispatch_queue> eventQueue;
@property (nonatomic) <TTVideoEngineEventManagerProtocol> delegate;
@property (nonatomic) <TTVideoEngineEventManagerProtocol> innerDelegate;
- (void)addEventV2:eventName:;
- (id)feedbackEvents;
- (id)innerDelegate;
- (id)latestEvents;
- (id)popAllEvents;
- (void)setInnerDelegate:;
- (void)setLatestEvents:;
- (void)setEventQueue:;
- (id)eventQueue;
- (id)init;
- (void)setDelegate:;
- (void)setEvents:;
- (id)delegate;
- (void).cxx_destruct;
- (id)events;
- (void)addEvent:;
- (void)setLogVersion:;
- (long long)logVersion;
- (long long)eventVersion;
- (void)setEventVersion:;
+ (id)sharedManager;
@end
