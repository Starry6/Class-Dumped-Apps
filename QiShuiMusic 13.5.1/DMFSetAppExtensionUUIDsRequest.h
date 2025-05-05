@interface DMFSetAppExtensionUUIDsRequest : DMFAppRequest
@property (nonatomic) NSString VPNUUIDString;
@property (nonatomic) NSString contentFilterUUIDString;
@property (nonatomic) NSString DNSProxyUUIDString;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)VPNUUIDString;
- (void)setVPNUUIDString:;
- (id)contentFilterUUIDString;
- (void)setContentFilterUUIDString:;
- (id)DNSProxyUUIDString;
- (void)setDNSProxyUUIDString:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
