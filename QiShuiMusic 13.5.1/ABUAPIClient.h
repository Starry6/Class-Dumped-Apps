@interface ABUAPIClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> applogEncyptSemaphore;
- (id)_requestConfigBaseParameters;
- (id)_requestRewardCallbackBaseParameters;
- (id)applogEncyptSemaphore;
- (void)applogWithParams:completionHandler:;
- (id)commonEventParameters:;
- (void)requestConfigWithParam:complete:;
- (void)requestRewardWithParam:complete:;
- (void)requestServerBiddingWithParam:complete:;
- (void)setApplogEncyptSemaphore:;
- (void)statsWithParams:completionHandler:;
- (void)switchWithRequest:settingString:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
