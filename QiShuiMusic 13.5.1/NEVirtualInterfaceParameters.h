@interface NEVirtualInterfaceParameters : NSObject
@property (nonatomic) NSFileHandle controlSocket;
@property (nonatomic) NSString name;
@property (nonatomic) ^v userEthernetController;
@property (nonatomic) q type;
@property (nonatomic) Q maxPendingPackets;
@property (nonatomic) NSData ethernetAddress;
@property (nonatomic) NSNumber mtu;
- (id)mtu;
- (void)dealloc;
- (void)setName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (id)ethernetAddress;
- (id)initWithVirtualInterface:;
- (id)initWithType:maxPendingPackets:ethernetAddress:mtu:;
- (id)createVirtualInterfaceWithQueue:clientInfo:;
- (id)controlSocket;
- (void)setControlSocket:;
- (id)userEthernetController;
- (void)setUserEthernetController:;
- (unsigned long long)maxPendingPackets;
+ (BOOL)supportsSecureCoding;
@end
