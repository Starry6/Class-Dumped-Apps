@interface MRDeviceInfoOutputDevice : MRAVOutputDevice
@property (nonatomic) MRDeviceInfo deviceInfo;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)isLocalDevice;
- (unsigned int)deviceType;
- (BOOL)isGroupable;
- (BOOL)isRemoteControllable;
- (long long)hostDeviceClass;
- (BOOL)supportsMultiplayer;
- (BOOL)canAccessRemoteAssets;
- (id)groupID;
- (id)logicalDeviceID;
- (id)deviceInfo;
- (id)uid;
- (id)modelID;
- (BOOL)canAccessAppleMusic;
- (id)avOutputDevice;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)deviceSubtype;
- (BOOL)shouldBeLocallyHosted;
- (id)initWithDeviceInfo:;
@end
