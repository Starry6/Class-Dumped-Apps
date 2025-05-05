@interface AAFXPCSessionConfig : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) Q options;
@property (nonatomic) Protocol remoteProtocol;
@property (nonatomic) NSXPCInterface remoteObjectInterface;
@property (nonatomic) Protocol exportedProtocol;
- (void)setOptions:;
- (void)setServiceName:;
- (id)serviceName;
- (void)setRemoteObjectInterface:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)remoteObjectInterface;
- (id)initWithServiceName:remoteProtocol:exportedProtocol:options:;
- (id)initWithServiceName:remoteProtocol:options:;
- (id)exportedProtocol;
- (id)remoteProtocol;
- (void)setRemoteProtocol:;
- (void)setExportedProtocol:;
@end
