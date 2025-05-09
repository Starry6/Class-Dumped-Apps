@interface AWEHPCombineManager : NSObject
@property (nonatomic) AWEHPCombineNetworkManager networkManager;
@property (nonatomic) AWEHPCombineSubscribeCenter subscribeCenter;
@property (nonatomic) AWEHPCombineStrategyCenter strategyCenter;
@property (nonatomic) AWEHPCombineAutoTriggerCenter triggerCenter;
@property (nonatomic) BOOL requestSessionID;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) NSString retryScene;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)setNetworkManager:;
- (id)networkManager;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)triggerCenter:triggerScene:;
- (id)subscribeCenter;
- (id)strategyCenter;
- (id)triggerCenter;
- (void)p_sendRequestWithAutoTriggerScene:;
- (void)p_sendRequestWithForceRequest:completion:;
- (id)retryScene;
- (void)setRetryScene:;
- (BOOL)requestSessionID;
- (void)setRequestSessionID:;
- (void)businessRequest:completion:;
- (void)setSubscribeCenter:;
- (void)setStrategyCenter:;
- (void)setTriggerCenter:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
