@interface AWETeenModeEntryTraker : NSObject
@property (nonatomic) BOOL teenModeStatusChangeBeforLaunch;
@property (nonatomic) AWETeenModeBadPopViewTracker badPopViewTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (BOOL)teenModeStatusChangeBeforLaunch;
- (void)p_trackTeenModeStatus:;
- (id)badPopViewTracker;
- (void)setTeenModeStatusChangeBeforLaunch:;
- (void)trackTeenModeLaunchOfCode;
- (void)setBadPopViewTracker:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
