@interface BDInstallRequestProxy : NSObject
@property (nonatomic) Q retryTimes;
@property (nonatomic) double retryDuration;
@property (nonatomic) NSArray fallbackURLStrings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_requestURLString:params:needCommonParams:requestSerializer:responseSerializer:fallbackURLStrings:fallbackIndex:retryTimes:retryDuration:originalULString:success:failure:;
- (id)fallbackURLStrings;
- (void)requestURLString:params:needCommonParams:requestSerializer:responseSerializer:success:failure:;
- (double)retryDuration;
- (unsigned long long)retryTimes;
- (void)setFallbackURLStrings:;
- (void)setRetryDuration:;
- (void)setRetryTimes:;
- (id)init;
- (void).cxx_destruct;
@end
