@interface MRAVConcreteEndpoint : MRConcreteEndpoint
- (void)removeOutputDevices:initiator:withReplyQueue:completion:;
- (void)setExternalDevice:;
- (void).cxx_destruct;
- (void)setOutputDevices:initiator:withReplyQueue:completion:;
- (void)addOutputDevices:initiator:withReplyQueue:completion:;
- (void)outputDeviceVolume:queue:completion:;
- (void)outputDeviceVolumeControlCapabilities:queue:completion:;
- (void)setOutputDeviceVolume:outputDevice:queue:completion:;
- (void)handleVolumeChangedNotification:;
- (void)handleVolumeCapabilityChangedNotification:;
- (id)initWithDesignatedGroupLeader:outputDevices:;
- (id)initWithOutputDeviceGroup:groupLeader:outputDevices:;
- (float)volumeForOutputDevice:error:;
- (void)registerVolumeNotifications;
+ (id)errorWithChangeResult:outputDevice:;
@end
