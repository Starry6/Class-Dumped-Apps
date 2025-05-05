@interface NWAddressEndpoint : NWHostEndpoint
@property (nonatomic) BOOL isWildcard;
@property (nonatomic) BOOL isLoopback;
@property (nonatomic) BOOL isLinkLocal;
@property (nonatomic) NSString addressString;
@property (nonatomic) NSString addressStringNoPort;
@property (nonatomic) NSData addressData;
@property (nonatomic) r^{sockaddr=CC[14c]} address;
@property (nonatomic) Q addressFamily;
- (BOOL)isWildcard;
- (BOOL)isLoopback;
- (BOOL)isLinkLocal;
- (id)descriptionWithIndent:showFullContent:;
- (id)addressString;
- (unsigned long long)addressFamily;
- (id)address;
- (id)ethernetAddress;
- (id)addressData;
- (id)addressStringNoPort;
+ (unsigned int)endpointType;
+ (id)endpointWithHostname:port:;
+ (id)endpointWithAddress:;
@end
