@interface AVOutputContextLocalOutputDeviceGroupImpl : NSObject
@property (nonatomic) AVOutputDeviceGroup parentOutputDeviceGroup;
@property (nonatomic) BOOL receivesLongFormAudioFromLocalDevice;
@property (nonatomic) NSArray outputDevices;
@property (nonatomic) AVOutputDevice groupLeader;
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)volumeControlType;
- (id)groupLeader;
- (float)volume;
- (void)dealloc;
- (id)outputDevices;
- (void)setVolume:;
- (id)initWithOutputContext:;
- (void).cxx_destruct;
- (void)addOutputDevice:withOptions:completionHandler:;
- (void)removeOutputDevice:withOptions:completionhandler:;
- (id)parentOutputDeviceGroup;
- (void)setParentOutputDeviceGroup:;
- (BOOL)receivesLongFormAudioFromLocalDevice;
- (void)_contextOutputDevicesDidChange:;
- (void)_contextVolumeDidChange;
- (void)_contextCanSetVolumeDidChange;
@end
