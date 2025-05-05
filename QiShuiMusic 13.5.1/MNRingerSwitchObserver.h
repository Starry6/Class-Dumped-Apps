@interface MNRingerSwitchObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSInteger ringerStateNotifyToken;
@property (nonatomic) BOOL ringerSwitchEnabled;
- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)registerForRingerStateNotifications;
- (BOOL)ringerSwitchEnabled;
- (unsigned long long)stateForNotifyToken:;
- (void)setRingerSwitchEnabled:;
- (void)setRingerStateNotifyToken:;
- (void).cxx_destruct;
- (void)unregisterForRingerStateNotifications;
- (BOOL)fetchRingerSwitchEnabled;
- (int)ringerStateNotifyToken;
- (void)loadPropertiesOnConcurrentQueue;
+ (id)sharedObserver;
@end
