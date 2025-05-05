@interface AALoginAccountRequest : AARequest
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:delegates:;
+ (Class)responseClass;
@end
