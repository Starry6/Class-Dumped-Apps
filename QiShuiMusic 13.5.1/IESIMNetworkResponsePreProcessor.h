@interface IESIMNetworkResponsePreProcessor : NSObject
@property (nonatomic) BOOL needsRetry;
@property (nonatomic) BOOL alertHijack;
@property (nonatomic) TTHttpRequest retryRequest;
@property (nonatomic) Q retryTimes;
@property (nonatomic) BOOL ttNeedsRetry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAlertHijack:;
- (BOOL)alertHijack;
- (void)finishPreprocess;
- (void)preprocessWithResponse:responseObject:error:ForRequest:;
- (id)retryRequest;
- (unsigned long long)retryTimes;
- (void)setRetryRequest:;
- (void)setRetryTimes:;
- (BOOL)ttNeedsRetry;
- (id)init;
- (void).cxx_destruct;
- (BOOL)needsRetry;
- (void)setNeedsRetry:;
+ (id)processor;
@end
