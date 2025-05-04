@interface AWEMVEmptyExperimentController : AWEDCFeedBaseController
@property (nonatomic) BOOL gotDeviceId;
@property (nonatomic) q lastNetworkStatus;
- (void)handleConnectionChanged:;
- (void)addNotifications;
- (void)setLastNetworkStatus:;
- (long long)lastNetworkStatus;
- (BOOL)gotDeviceId;
- (void)dealloc;
- (void)containerViewDidLoad;
@end
