@interface VCNetworkAddress : NSObject
@property (nonatomic) NSString ip;
@property (nonatomic) S port;
@property (nonatomic) S ipVersion;
@property (nonatomic) NSString interfaceName;
- (BOOL)isIPv6;
- (void)dealloc;
- (void)setInterfaceName:;
- (unsigned short)port;
- (void)setPort:;
- (id)description;
- (id)interfaceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned short)ipVersion;
- (void)setIpVersion:;
- (void)setIp:;
- (id)ip;
- (int)getSockaddrStorage:size:;
@end
