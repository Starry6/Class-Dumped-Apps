@interface AVCaptureDeviceDiscoverySession : NSObject
@property (nonatomic) NSArray devices;
@property (nonatomic) NSArray supportedMultiCamDeviceSets;
- (id)init;
- (void)dealloc;
- (id)devices;
- (id)_initWithDeviceTypes:mediaType:position:allowIOSMacEnvironment:prefersUnsuspendedAndAllowsAnyPosition:;
- (void)_handleDeviceConnectedDisconnectedNotification:;
- (id)description;
- (id)supportedMultiCamDeviceSets;
+ (id)allVideoDevices;
+ (id)allAudioDevices;
+ (id)allAudioDeviceTypes;
+ (id)allPointCloudDevices;
+ (id)allDeviceTypes;
+ (id)allDevices;
+ (id)allVideoDeviceTypes;
+ (id)allVirtualDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allVirtualDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:mediaType:position:;
+ (id)allSupportedMultiCamDeviceSets;
@end
