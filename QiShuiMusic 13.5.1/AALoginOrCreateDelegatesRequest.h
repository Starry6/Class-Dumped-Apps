@interface AALoginOrCreateDelegatesRequest : AARequest
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:parameters:signingSession:;
+ (Class)responseClass;
@end
