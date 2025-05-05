@interface NEInternetNexus : NENexus
@property (nonatomic) NWRemotePacketProxy packetProxy;
@property (nonatomic) ^{NEVirtualInterface_s=} virtualInterface;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:delegate:;
- (id)initWithName:delegate:shouldCreateKernelChannel:;
- (BOOL)setDefaultInputHandler:;
- (void)setRemotePacketProxy:;
- (BOOL)setUseFlowswitch:;
- (id)packetProxy;
- (void)setPacketProxy:;
@end
