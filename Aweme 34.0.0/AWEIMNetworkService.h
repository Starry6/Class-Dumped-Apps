@interface AWEIMNetworkService : IESIMNetwork
@property (nonatomic) BOOL useCacheStrategyMgrOpt;
@property (nonatomic) NSObject<AWEIMNetworkStrategyControllerProtocol> strategyMgr;
- (BOOL)useCacheStrategyMgrOpt;
- (id)strategyMgr;
- (void)setStrategyMgr:;
- (id)init;
- (void).cxx_destruct;
+ (id)requestWithRequest:;
+ (id)strategyController;
+ (id)_createIMStrategyNetworkTask:;
+ (id)networkTaskWithTask:requestModel:;
+ (id)sharedInstance;
@end
