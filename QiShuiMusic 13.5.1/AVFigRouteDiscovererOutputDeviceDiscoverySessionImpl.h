@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject
@property (nonatomic) ^{OpaqueFigRouteDiscoverer=} routeDiscoverer;
@property (nonatomic) AVOutputDeviceDiscoverySession parentOutputDeviceDiscoverySession;
@property (nonatomic) AVAudioSession targetAudioSession;
@property (nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices availableOutputDevicesObject;
@property (nonatomic) BOOL devicePresenceDetected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_serverDied;
- (void)dealloc;
- (id)availableOutputDevicesObject;
- (BOOL)devicePresenceDetected;
- (void)setTargetAudioSession:;
- (void)_endpointDescriptorChanged;
- (void)_routePresentChanged;
- (id)routeDiscoverer;
- (id)targetAudioSession;
- (void)_availableRoutesChanged;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:forClientIdentifiers:;
- (void).cxx_destruct;
- (void)setParentOutputDeviceDiscoverySession:;
- (id)parentOutputDeviceDiscoverySession;
- (id)initWithFigRouteDiscovererCreator:syncController:;
- (void)_availableGroupsChanged;
@end
