@interface BDUGLuckyDogNetworkManager : NSObject
@property (nonatomic) <BDUGLuckyDogNetworkCycleIntercepterProtocol> cycleIntercepterDelegate;
@property (nonatomic) NSMutableDictionary coolingRequests;
@property (nonatomic) NSLock coolingRequestsLock;
@property (nonatomic) BOOL isBoeEnable;
@property (nonatomic) BOOL shouldBlockSummitRequest;
- (void)setIsBoeEnable:;
- (id)coolingRequests;
- (void)requestPlainForJSONWithPath:params:method:headerField:callback:;
- (void)__requestWithPath:errorBlock:continueBlock:;
- (id)buildRequestURLWithPath:;
- (id)coolingRequestsLock;
- (id)cycleIntercepterDelegate;
- (id)defaultDomain;
- (void)getTimerTaskInfoWithToken:completion:;
- (BOOL)isBoeEnable;
- (void)requestForJSONWithPath:params:method:headerField:callback:;
- (void)requestForJSONWithPath:params:method:needCommonParams:retryTimes:headerField:callback:;
- (void)requestForJSONWithPath:params:method:needCommonParams:retryTimes:needRetryBlock:delayTs:headerField:callback:;
- (void)requestGeneralAckTimeWithToken:uniqueId:incrTime:retryTimes:completion:;
- (void)requestPlainForJSONWithPath:params:method:needCommonParams:headerField:callback:;
- (void)setCoolingRequests:;
- (void)setCoolingRequestsLock:;
- (void)setCycleIntercepterDelegate:;
- (void)setIsCoolingDown:;
- (void)setShouldBlockSummitRequest:;
- (BOOL)shouldBlockSummitRequest;
- (void)trackRequestFrequencyIfNeeded:;
- (long long)trackCount;
- (id)init;
- (void).cxx_destruct;
- (id)cache;
- (BOOL)_enableCooling;
- (BOOL)isCoolingDown;
+ (id)netWorkString;
+ (id)sharedInstance;
@end
