@interface BDVideoUploadEventManager : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) NSObject<OS_dispatch_queue> eventQueue;
@property (nonatomic) BOOL canShowLog;
@property (nonatomic) q uploadLogType;
@property (nonatomic) <BDVideoUploadEventManagerProtocol> delegate;
- (BOOL)canShowLog;
- (id)popAllEvents;
- (void)setCanShowLog:;
- (void)setUploadLogType:;
- (void)showLog:;
- (long long)uploadLogType;
- (void)setEventQueue:;
- (id)eventQueue;
- (id)init;
- (void)setDelegate:;
- (void)setEvents:;
- (id)delegate;
- (void).cxx_destruct;
- (id)events;
- (void)addEvent:;
+ (void)configureAppInfo:;
+ (id)dictionaryToJson:;
+ (void)event:params:;
+ (id)sharedManager;
@end
