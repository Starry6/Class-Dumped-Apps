@interface APSEConfigManager : NSObject
@property (nonatomic) NSMutableArray<ConfigUpdatedProtocol> listeners;
@property (nonatomic) BOOL isFirstRefresh;
- (void)addConfigUpdatedListener:;
- (BOOL)isFirstRefresh;
- (void)setIsFirstRefresh:;
- (void)setListeners:;
- (id)init;
- (id)listeners;
- (void).cxx_destruct;
+ (void)initConfigData;
+ (void)refreshConfigData:;
+ (void)refreshConfigDataFromRpc;
+ (void)refreshConfigDataFromRpcWithForceConfig:;
+ (id)requestConfigData:;
+ (id)sharedInstance;
@end
