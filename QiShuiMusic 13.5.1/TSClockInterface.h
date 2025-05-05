@interface TSClockInterface : NSObject
@property (nonatomic) TSClock clock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClock:;
- (id)clock;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:;
- (void)didChangeClockMasterForClock:;
- (void)didChangeLockStateTo:forClock:;
- (void)didEndClockGrandmasterChangeForClock:;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:localPort:forClock:;
- (void)didChangeLocalPortWithGrandmasterID:localPort:forClock:;
- (void)setLockStateNotificationCallback:refcon:;
- (void)setMasterChangeNotificationCallback:refcon:;
- (void)setTimeSyncTimeChangeNotificationCallback:refcon:;
- (void)setgPTPGrandmasterNotificationCallback:refcon:;
- (void)setgPTPGrandmasterIDAndPortNotificationCallback:refcon:;
- (void)setgPTPLocalPortNotificationCallback:refcon:;
@end
