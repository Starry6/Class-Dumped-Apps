@interface AVOutputDeviceDiscoverySession : NSObject
@property (nonatomic) ^{OpaqueFigRouteDiscoverer=} routeDiscoverer;
@property (nonatomic) q discoveryMode;
@property (nonatomic) AVAudioSession targetAudioSession;
@property (nonatomic) NSArray availableOutputDevices;
@property (nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices availableOutputDevicesObject;
@property (nonatomic) NSArray availableOutputDeviceGroups;
@property (nonatomic) BOOL devicePresenceDetected;
- (void)setDiscoveryMode:;
- (id)init;
- (void)dealloc;
- (long long)discoveryMode;
- (id)availableOutputDevicesObject;
- (BOOL)devicePresenceDetected;
- (id)availableOutputDeviceGroups;
- (id)availableOutputDevices;
- (void)setTargetAudioSession:;
- (id)routeDiscoverer;
- (id)targetAudioSession;
- (id)impl;
- (id)initWithDeviceFeatures:;
- (void)setDiscoveryMode:forClientIdentifiers:;
- (id)initWithOutputDeviceDiscoverySessionImpl:;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:;
- (void)outputDeviceDiscoverySessionImpl:didExpireWithReplacement:;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:;
+ (id)outputDeviceDiscoverySessionFactory;
@end
