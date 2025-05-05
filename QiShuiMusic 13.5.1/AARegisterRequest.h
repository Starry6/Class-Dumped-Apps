@interface AARegisterRequest : AAAuthenticateRequest
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:username:password:;
- (void)addCookieHeaders:;
+ (Class)responseClass;
@end
