@interface AWEIMRetryHelper : NSObject
@property (nonatomic) q targetRetryCount;
@property (nonatomic) q currentRetryCount;
@property (nonatomic) @? retryBlock;
- (BOOL)retryIfNeeded;
- (id)initWithRetryCount:retryBlock:;
- (long long)targetRetryCount;
- (void)setTargetRetryCount:;
- (BOOL)canRetry;
- (void).cxx_destruct;
- (long long)currentRetryCount;
- (void)setCurrentRetryCount:;
- (id)retryBlock;
- (void)setRetryBlock:;
@end
