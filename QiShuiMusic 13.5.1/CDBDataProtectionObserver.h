@interface CDBDataProtectionObserver : NSObject
@property (nonatomic) CalDeviceLockObserver deviceLockObserver;
@property (nonatomic) @? stateChangedCallback;
@property (nonatomic) BOOL dataIsAccessible;
- (id)init;
- (BOOL)dataIsAccessible;
- (void)setDeviceLockObserver:;
- (id)stateChangedCallback;
- (void)_deviceLockStateChanged;
- (void).cxx_destruct;
- (void)setStateChangedCallback:;
- (id)deviceLockObserver;
+ (id)stateChangedNotificationName;
@end
