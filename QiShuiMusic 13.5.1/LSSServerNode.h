@interface LSSServerNode : NSObject
@property (nonatomic) NSDictionary nodeInfo;
@property (nonatomic) NSString IP;
@property (nonatomic) Q DNSMode;
@property (nonatomic) BOOL TCPFastOpenAvailable;
@property (nonatomic) BOOL shouldPreconnectWithTCPFastOpen;
@property (nonatomic) NSString symbol;
- (id)IP;
- (unsigned long long)DNSMode;
- (BOOL)shouldPreconnectWithTCPFastOpen;
- (BOOL)ipv6TcpProbe;
- (BOOL)isIpv6Address;
- (BOOL)isTCPFastOpenAvailable;
- (id)nodeInfo;
- (BOOL)preconnectWithTCPFastOpen;
- (void)setIP:;
- (void)setNodeInfo:;
- (void)updateWithNodeInfo:;
- (id)symbol;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isValidIPv4Address;
+ (id)nodeWithNodeInfo:;
@end
