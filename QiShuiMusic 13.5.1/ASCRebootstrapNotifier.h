@interface ASCRebootstrapNotifier : NSObject
@property (nonatomic) NSInteger token;
@property (nonatomic) Q rebootstrapCounterSnapshot;
- (void)dealloc;
- (int)token;
- (void)postLocalNotificationIfNeeded;
- (id)_initSingleton;
- (void)setRebootstrapCounterSnapshot:;
- (void)postLocalNotification;
- (unsigned long long)rebootstrapCounterSnapshot;
+ (id)sharedNotifier;
@end
