@interface AVCNetworkAddress : NSObject
@property (nonatomic) NSString ip;
@property (nonatomic) S port;
@property (nonatomic) BOOL isIPv6;
@property (nonatomic) NSString interfaceName;
- (BOOL)isIPv6;
- (id)init;
- (void)dealloc;
- (void)setInterfaceName:;
- (void)setIsIPv6:;
- (unsigned short)port;
- (void)setPort:;
- (id)interfaceName;
- (void)setIp:;
- (id)ip;
@end
