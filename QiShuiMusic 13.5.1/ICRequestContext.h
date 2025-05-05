@interface ICRequestContext : NSObject
@property (nonatomic) ICClientInfo clientInfo;
@property (nonatomic) ICDeviceInfo deviceInfo;
@property (nonatomic) NSString userAgent;
@property (nonatomic) ICURLResponseAuthenticationProvider authenticationProvider;
@property (nonatomic) ICNetworkConstraints networkConstraints;
- (id)userAgent;
- (void)setClientInfo:;
- (void)setDeviceInfo:;
- (id)deviceInfo;
- (id)initWithClientInfo:;
- (id)clientInfo;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBlock:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithBlock:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAuthenticationProvider:;
- (id)initWithClientInfo:authenticationProvider:;
- (void)setNetworkConstraints:;
- (BOOL)_allowsMutation;
- (id)networkConstraints;
- (id)authenticationProvider;
+ (BOOL)supportsSecureCoding;
@end
