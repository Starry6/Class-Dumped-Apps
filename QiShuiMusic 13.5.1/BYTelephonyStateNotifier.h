@interface BYTelephonyStateNotifier : NSObject
@property (nonatomic) NSInteger simUnlockNotificationToken;
- (void)dealloc;
- (void)notifySIMUnlockStateChangedTo:;
- (void)_beginObservingWithNotificationQueue:notificationBlock:;
- (void)_endObservingState;
- (unsigned long long)currentSIMUnlockState;
- (id)initForNotifying;
- (id)initWithNotificationQueue:notificationBlock:;
- (void)setSimUnlockNotificationToken:;
- (int)simUnlockNotificationToken;
+ (unsigned long long)retrieveSIMUnlockStateFromToken:;
@end
