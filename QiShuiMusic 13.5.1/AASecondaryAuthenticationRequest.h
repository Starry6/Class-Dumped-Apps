@interface AASecondaryAuthenticationRequest : AARequest
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithDSID:primaryToken:;
+ (Class)responseClass;
@end
