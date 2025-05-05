@interface LiveStreamConnectResultEventResult : NSObject
@property (nonatomic) BOOL connectSuccess;
@property (nonatomic) q retryCount;
@property (nonatomic) q streamRetryCount;
- (BOOL)connectSuccess;
- (void)setConnectSuccess:;
- (void)setStreamRetryCount:;
- (long long)streamRetryCount;
- (void)setRetryCount:;
- (long long)retryCount;
@end
