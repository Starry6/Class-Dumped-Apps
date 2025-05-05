@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject
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
- (void).cxx_destruct;
- (void)addOutputDevice:withOptions:completionHandler:;
- (void)removeOutputDevice:withOptions:completionhandler:;
- (id)parentOutputDeviceGroup;
- (void)setParentOutputDeviceGroup:;
- (BOOL)receivesLongFormAudioFromLocalDevice;
- (id)initWithRemoteGroupID:syncController:;
- (id)_outputDevicesFromProperty:withQualifier:;
- (id)_outputDeviceForID:;
- (void)_groupMembersChangedForGroupWithID:;
- (void)_volumeChangedForGroupWithID:;
- (void)_volumeControlTypeChangedForGroupWithID:;
@end
