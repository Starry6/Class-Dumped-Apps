@interface NEIPsecNexus : NEInternetNexus
@property (nonatomic) NSArray nexusInstances;
- (void).cxx_destruct;
- (id)initWithName:delegate:shouldCreateKernelChannel:;
- (BOOL)setDefaultInputHandler:;
- (void)setRemotePacketProxy:;
- (id)initWithName:delegate:enableWithChannelCount:;
- (id)initWithName:delegate:enableWithChannelCount:netifRingSize:kernelPipeTxRingSize:kernelPipeRxRingSize:;
- (id)initWithName:delegate:enableWithChannelCount:netifRingSize:kernelPipeTxRingSize:kernelPipeRxRingSize:execUUID:;
- (id)nexusInstances;
- (void)setNexusInstances:;
@end
