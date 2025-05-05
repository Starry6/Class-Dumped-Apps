@interface BYAnalyticsManager : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) NSMutableDictionary lazyEvents;
- (void)commit;
- (id)init;
- (void)_sendEvent:payload:;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (void)reset;
- (void)addEvent:;
- (void)addEvent:withPayload:persist:;
- (void)addEvent:withPayloadBlock:persist:;
- (void)removeEventsUsingBlock:;
- (void)stash:;
- (void)commitThenUpload;
- (void)removeNonPersistentEvents;
- (void)_gatherDataFromProducers;
- (id)lazyEvents;
- (void)setLazyEvents:;
@end
