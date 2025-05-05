@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint
@property (nonatomic) MRAVRoutingDiscoverySession audioDiscoverySession;
- (id)groupLeader;
- (void)setListeningMode:outputDeviceUID:queue:completion:;
- (void)setAllowsHeadTrackedSpatialAudio:outputDeviceUID:queue:completion:;
- (id)audioDiscoverySession;
- (void)setHeadTrackedSpatialAudioMode:outputDeviceUID:queue:completion:;
+ (id)sharedLocalEndpointForRoutingContextWithUID:;
+ (id)sharedLocalEndpoint;
@end
