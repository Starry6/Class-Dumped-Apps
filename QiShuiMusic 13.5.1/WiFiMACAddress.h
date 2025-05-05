@interface WiFiMACAddress : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSData ipv6LinkLocalAddress;
- (id)data;
- (id)ipv6LinkLocalAddress;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithLinkLocalIPv6Address:;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (id)description;
- (id)initWithAddress:ipv6Address:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)zeroAddress;
@end
