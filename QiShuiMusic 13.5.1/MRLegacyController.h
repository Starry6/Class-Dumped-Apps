@interface MRLegacyController : NSObject
@property (nonatomic) NSString outputDeviceUID;
@property (nonatomic) MRExternalDevice externalDevice;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <MRLegacyControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (id)initWithOutputDevice:;
- (id)initWithOutputDeviceUID:;
- (void)setOutputDeviceUID:;
- (id)outputDeviceUID;
- (void)tearDown;
- (void)setExternalDevice:;
- (id)delegate;
- (void).cxx_destruct;
- (id)externalDevice;
- (void)connect;
- (void)setQueue:;
- (id)queue;
- (void)handleVolumeCapabilitiesDidChangeNotification:;
- (id)initWithExternalDevice:outputDeviceUID:;
- (id)initWithAVOutputDevice:;
- (void)addOutputDeviceIDs:completion:;
- (void)removeOutputDeviceIDs:completion:;
- (void)setOutputDeviceIDs:completion:;
- (void)getMasterVolumeWithCompletion:;
- (void)getOutputDeviceVolume:completion:;
- (void)getMasterVolumeCapabilitiesWithCompletion:;
- (void)getOutputDeviceVolumeCapabilities:completion:;
- (void)setMasterVolume:completion:;
- (void)setVolume:forOutputDeviceID:completion:;
- (void)modifyTopologyAddingDevices:removingDevices:settingDevices:completion:;
- (void)setupExternalDevice;
@end
