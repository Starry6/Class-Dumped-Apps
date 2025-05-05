@interface SFSystemService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)init;
- (void)_sfServiceStart;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (id)description;
- (void)_handleSessionStarted:;
- (void)invalidate;
- (void)activate;
- (void)_handleSessionEnded:;
- (void)_handleGetSystemInfoRequest:responseHandler:;
- (void)_handleRebootSystemForSession:request:responseHandler:;
- (void)_handleProfilesGetForSession:request:responseHandler:;
- (void)_handleProfileInstallForSession:request:responseHandler:;
- (void)_handleProfileRemoveForSession:request:responseHandler:;
@end
