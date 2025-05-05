@interface AKAnisetteProvisioningController : NSObject
@property (nonatomic) AKDevice targetDevice;
@property (nonatomic) <AKAnisetteServiceProtocol> anisetteDataProvider;
- (id)targetDevice;
- (id)init;
- (void)dealloc;
- (void)setAnisetteDataProvider:;
- (id)initForDevice:provider:;
- (void)provisionWithCompletion:;
- (void)anisetteDataForURLRequest:completion:;
- (id)anisetteDataForURLRequest:error:;
- (id)_anisetteServiceConnection;
- (void)fetchPeerAttestationDataForRequest:completion:;
- (id)anisetteDataWithError:;
- (void)legacyAnisetteDataForDSID:withCompletion:;
- (id)fetchAnisetteDataAndProvisionIfNecessary:error:;
- (void).cxx_destruct;
- (void)setTargetDevice:;
- (id)anisetteDataProvider;
- (void)anisetteDataWithCompletion:;
- (void)syncWithSIMData:completion:;
- (void)fetchAnisetteDataAndProvisionIfNecessary:withCompletion:;
- (id)initWithDaemonXPCEndpoint:;
- (void)eraseWithCompletion:;
@end
