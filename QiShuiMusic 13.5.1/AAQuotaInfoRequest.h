@interface AAQuotaInfoRequest : AARequest
@property (nonatomic) ACAccount account;
- (id)account;
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (id)initDetailedRequestWithAccount:;
+ (Class)responseClass;
@end
