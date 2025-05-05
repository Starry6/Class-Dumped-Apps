@interface CoreSpotlightPreferences : NSObject
@property (nonatomic) @? notify_handler;
@property (nonatomic) NSString state_key;
@property (nonatomic) r* notification_key;
@property (nonatomic) NSObject<OS_dispatch_queue> notifyQueue;
@property (nonatomic) @? notifyHandler;
@property (nonatomic) NSInteger notifyToken;
- (id)notifyQueue;
- (void)dealloc;
- (int)notifyToken;
- (void).cxx_destruct;
- (void)setNotifyQueue:;
- (BOOL)notifyStart;
- (void)handlePreferencesChanged;
- (void)saveState:;
- (id)notifyHandler;
- (void)setNotifyHandler:;
- (id)notify_handler;
- (id)state_key;
- (void)setState_key:;
- (id)notification_key;
- (void)setNotification_key:;
@end
