@interface BDTuringCallbackInfo : NSObject
@property (nonatomic) c bdTuringRetry;
@property (nonatomic) double bdTuringCallbackDuration;
@property (nonatomic) NSString retryByHeaderFilterKey;
- (double)bdTuringCallbackDuration;
- (char)bdTuringRetry;
- (id)initWithTuringRetry:callbackDuration:retryByHeaderFilterKey:;
- (id)retryByHeaderFilterKey;
- (void)setBdTuringCallbackDuration:;
- (void)setBdTuringRetry:;
- (void)setRetryByHeaderFilterKey:;
- (void).cxx_destruct;
@end
