@interface MFLockStateMonitor : NSObject
@property (nonatomic) EFObservable lockStateObservable;
@property (nonatomic) BOOL locked;
- (BOOL)isLocked;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)lockStateObservable;
- (void)_receiveLockState:;
+ (id)sharedInstance;
@end
