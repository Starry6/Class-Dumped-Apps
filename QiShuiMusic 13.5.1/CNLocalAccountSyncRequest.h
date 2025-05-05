@interface CNLocalAccountSyncRequest : CNAccountSyncRequest
@property (nonatomic) Q retryCount;
@property (nonatomic) BOOL standby;
@property (nonatomic) BOOL resetStandby;
@property (nonatomic) BOOL clearify;
- (void)setStandby:;
- (BOOL)standby;
- (void)setRetryCount:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)retryCount;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)resetStandby;
- (void)setResetStandby:;
- (BOOL)clearify;
- (void)setClearify:;
+ (BOOL)supportsSecureCoding;
+ (id)argumentsForRequest:;
@end
