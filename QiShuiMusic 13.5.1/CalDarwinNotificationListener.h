@interface CalDarwinNotificationListener : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) BOOL listening;
@property (nonatomic) NSString notificationName;
- (id)callback;
- (id)notificationName;
- (void)dealloc;
- (BOOL)_removeObserver;
- (id)workQueue;
- (id)initWithNotificationName:callback:queue:;
- (void)setListening:;
- (id)callbackQueue;
- (void)deactivate;
- (id)initWithNotificationName:callback:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_addObserver;
- (BOOL)listening;
- (void)_notificationWithNameReceived:;
- (void)activate;
@end
