@interface CPLNetworkWatcher : NSObject
@property (nonatomic) NSString endPoint;
@property (nonatomic) CPLNetworkState networkState;
@property (nonatomic) <CPLNetworkWatcherDelegate> delegate;
- (id)endPoint;
- (void)_updateCellularPolicy:;
- (void)dealloc;
- (BOOL)_isRestrictedPath:policies:;
- (void)airplaneModeChanged;
- (void)start;
- (void)_updateCellularPolicyFromPolicies:;
- (void)setDelegate:;
- (void)_updateNetworkState:;
- (void)stop;
- (id)networkState;
- (id)delegate;
- (void).cxx_destruct;
- (void)_getCellularPolicyWithClient:;
- (id)initWithQueue:;
- (void)_updateAirplaneMode;
@end
