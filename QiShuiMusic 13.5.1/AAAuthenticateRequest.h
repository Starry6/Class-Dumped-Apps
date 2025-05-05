@interface AAAuthenticateRequest : AARequest
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
@property (nonatomic) NSString authToken;
@property (nonatomic) ACAccount account;
- (id)account;
- (id)urlString;
- (id)authToken;
- (void)setAuthToken:;
- (void)setPassword:;
- (id)username;
- (id)password;
- (void)setAccount:;
- (id)urlCredential;
- (void)setUsername:;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (id)initWithUsername:password:;
- (id)initWithURLString:username:password:;
+ (Class)responseClass;
@end
