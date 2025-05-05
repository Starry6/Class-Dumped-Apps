@interface SSNetworkQualityInquiry : NSObject
@property (nonatomic) NWNetworkOfInterestManager manager;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableSet knownNetworks;
@property (nonatomic) NSMutableArray knownNetworksReadyHandlers;
- (id)init;
- (void)didStopTrackingAllNOIs:;
- (void)performWhenKnownNetworksReady:;
- (void)dealloc;
- (void)drainKnownNetworksReadyHandlers;
- (BOOL)areKnownNetworksReady;
- (void)setKnownNetworksReadyHandlers:;
- (void)didStopTrackingNOI:;
- (id)manager;
- (void).cxx_destruct;
- (id)knownNetworks;
- (id)investigateNetworks;
- (id)knownNetworksReadyHandlers;
- (id)queue;
- (void)didStartTrackingNOI:;
+ (id)sharedInstance;
+ (BOOL)isEntitled;
@end
