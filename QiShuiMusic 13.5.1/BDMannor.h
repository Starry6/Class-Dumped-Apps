@interface BDMannor : NSObject
@property (nonatomic) BDMannorConfiguration config;
@property (nonatomic) HMDTTMonitor monitor;
- (void)registerMannorWithConfigHanler:;
- (void)initMannorClientAI;
- (void)resiterSlardarMonitor;
- (id)init;
- (void)setConfig:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)config;
+ (id)SDKAppID;
+ (id)adTrackHandler;
+ (id)getAppInfoHandler;
+ (id)hostCommonCapabilityHandler;
+ (void)registerATM;
+ (void)registerCommerceSDKMediatorWith:;
+ (void)registerRewardVideoExpand:;
+ (id)routerHandler;
+ (id)saasConfigHandler;
+ (void)setupDebugLabelOnView:;
+ (id)sharedInstance;
+ (id)requestHandler;
+ (id)downloadHandler;
@end
