@interface NEIKEv2TrafficSelector : NSObject
@property (nonatomic) NWAddressEndpoint startAddress;
@property (nonatomic) NWAddressEndpoint endAddress;
@property (nonatomic) S startPort;
@property (nonatomic) S endPort;
@property (nonatomic) C ipProtocol;
- (id)init;
- (id)startAddress;
- (id)endAddress;
- (unsigned char)ipProtocol;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setIpProtocol:;
- (void)setStartAddress:;
- (void)setEndAddress:;
- (unsigned short)startPort;
- (void)setStartPort:;
- (unsigned short)endPort;
- (void)setEndPort:;
+ (id)copyAllIPv6;
+ (id)copyAllIPv4;
@end
