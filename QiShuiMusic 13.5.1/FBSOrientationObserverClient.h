@interface FBSOrientationObserverClient : FBSServiceFacilityClient
- (long long)activeInterfaceOrientation;
- (void)handleMessage:withType:;
- (void)configureConnectMessage:;
- (void)_getActiveInterfaceOrientationSynchronously:withCompletion:;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationWithCompletion:;
- (void)registerOrientationInterest:;
- (id)initWithDelegate:calloutQueue:;
- (void)invalidate;
@end
