@interface AAUpdateProvisioningRequest : AARequest
@property (nonatomic) ACAccount account;
@property (nonatomic) NSString authToken;
- (id)account;
- (id)urlString;
- (id)authToken;
- (void)setAuthToken:;
- (void)setAccount:;
- (id)initWithURLString:account:;
- (id)urlCredential;
- (id)initWithAccount:token:;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:;
+ (Class)responseClass;
@end
