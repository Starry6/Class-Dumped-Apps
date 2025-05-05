@interface TTVideoUploadEventManager : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) NSObject<OS_dispatch_queue> eventQueue;
@property (nonatomic) <TTVideoUploadEventManagerProtocol> delegate;
- (id)popAllEvents;
- (void)setEventQueue:;
- (id)eventQueue;
- (id)init;
- (void)setDelegate:;
- (void)setEvents:;
- (id)delegate;
- (void).cxx_destruct;
- (id)events;
- (void)addEvent:;
+ (id)sharedManager;
@end
