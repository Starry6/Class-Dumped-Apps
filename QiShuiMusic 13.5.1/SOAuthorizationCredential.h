@interface SOAuthorizationCredential : NSObject
@property (nonatomic) NSDictionary httpAuthorizationHeaders;
@property (nonatomic) NSHTTPURLResponse httpResponse;
@property (nonatomic) NSData httpBody;
@property (nonatomic) NSArray secKeyProxyEndpoints;
- (id)initWithCoder:;
- (id)initWithAuthorizationResult:;
- (id)secKeyProxyEndpoints;
- (id)httpResponse;
- (id)httpBody;
- (void)encodeWithCoder:;
- (void)setHttpAuthorizationHeaders:;
- (void).cxx_destruct;
- (id)httpAuthorizationHeaders;
- (void)setHttpBody:;
- (void)setHttpResponse:;
- (void)setSecKeyProxyEndpoints:;
+ (BOOL)supportsSecureCoding;
@end
