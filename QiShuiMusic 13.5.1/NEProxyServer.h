@interface NEProxyServer : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString address;
@property (nonatomic) q port;
@property (nonatomic) BOOL authenticationRequired;
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
- (BOOL)checkValidityAndCollectErrors:;
- (void)setPassword:;
- (id)username;
- (id)password;
- (id)descriptionWithIndent:options:;
- (void)setUsername:;
- (void)setType:;
- (long long)port;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)address;
- (void)setAuthenticationRequired:;
- (id)copyWithZone:;
- (BOOL)authenticationRequired;
- (id)copyPassword;
- (id)initWithAddress:port:;
- (id)initWithType:address:port:;
+ (BOOL)supportsSecureCoding;
@end
