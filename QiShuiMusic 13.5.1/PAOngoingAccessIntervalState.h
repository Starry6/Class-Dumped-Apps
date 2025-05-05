@interface PAOngoingAccessIntervalState : NSObject
@property (nonatomic) PAAccess access;
@property (nonatomic) q retryCount;
- (id)access;
- (void)setRetryCount:;
- (void)setAccess:;
- (long long)retryCount;
- (id)initWithAccess:;
- (void).cxx_destruct;
@end
