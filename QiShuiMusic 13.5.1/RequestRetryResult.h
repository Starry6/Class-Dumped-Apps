@interface RequestRetryResult : NSObject
@property (nonatomic) BOOL requestRetryEnabled;
@property (nonatomic) BOOL removeHitResponseHeaderIfNotRetry;
@property (nonatomic) NSDictionary addRequestHeaders;
- (id)addRequestHeaders;
- (id)initWithRetryResult:addRequestHeaders:;
- (BOOL)removeHitResponseHeaderIfNotRetry;
- (BOOL)requestRetryEnabled;
- (void)setAddRequestHeaders:;
- (void)setRemoveHitResponseHeaderIfNotRetry:;
- (void)setRequestRetryEnabled:;
- (void).cxx_destruct;
@end
