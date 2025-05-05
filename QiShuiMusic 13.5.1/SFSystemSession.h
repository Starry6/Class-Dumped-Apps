@interface SFSystemSession : NSObject
@property (nonatomic) BOOL allowUnencrypted;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) SFDevice peerDevice;
- (void)_cleanup;
- (id)init;
- (void)_run;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)peerDevice;
- (void)setPeerDevice:;
- (void).cxx_destruct;
- (void)removeProfileWithIdentifier:completion:;
- (void)invalidate;
- (void)activate;
- (void)_processRequests;
- (void)_runSFSessionStart;
- (BOOL)allowUnencrypted;
- (void)setAllowUnencrypted:;
- (void)_runPairVerifyStart;
- (void)_processRequestsWithError:;
- (void)getSystemInfoWithCompletion:;
- (void)getProfilesWithCompletion:;
- (void)getProfilesResponse:error:completion:;
- (void)installProfileWithData:completion:;
- (void)installProfileWithURL:completion:;
- (void)installProfileResponse:error:completion:;
- (void)rebootSystemWithCompletion:;
@end
