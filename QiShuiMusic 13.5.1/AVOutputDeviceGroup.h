@interface AVOutputDeviceGroup : NSObject
@property (nonatomic) BOOL receivesLongFormAudioFromLocalDevice;
@property (nonatomic) NSArray outputDevices;
@property (nonatomic) AVOutputDevice groupLeader;
@property (nonatomic) float volume;
@property (nonatomic) q volumeControlType;
- (long long)volumeControlType;
- (id)groupLeader;
- (float)volume;
- (void)dealloc;
- (id)outputDevices;
- (void)setVolume:;
- (unsigned long long)hash;
- (id)impl;
- (id)description;
- (BOOL)isEqual:;
- (void)addOutputDevice:withOptions:completionHandler:;
- (BOOL)receivesLongFormAudioFromLocalDevice;
- (id)initWithOutputDeviceGroupImpl:;
- (void)outputDeviceGroupImpl:didChangeOutputDevicesWithInitiator:;
- (void)removeOutputDevice:withOptions:completionHandler:;
- (void)outputDeviceGroupImplDidChangeVolume:;
- (void)outputDeviceGroupImplDidChangeVolumeControlType:;
+ (id)sharedAudioPresentationOutputGroup;
+ (id)outputDeviceGroupWithRemoteGroupID:syncController:;
@end
