@interface AVVCRecordDeviceInfo : NSObject
@property (nonatomic) NSString recordRoute;
@property (nonatomic) BOOL isRemoteDevice;
@property (nonatomic) NSString remoteProductIdentifier;
@property (nonatomic) NSUUID remoteDeviceUID;
@property (nonatomic) I remoteDeviceCategory;
@property (nonatomic) BOOL isUpsamplingSourceAudio;
@property (nonatomic) NSString remoteDeviceUIDString;
- (void)dealloc;
- (id)recordRoute;
- (void).cxx_destruct;
- (BOOL)isRemoteDevice;
- (id)initWithRecordingEngine:;
- (id)remoteProductIdentifier;
- (id)remoteDeviceUID;
- (unsigned int)remoteDeviceCategory;
- (BOOL)isUpsamplingSourceAudio;
- (id)remoteDeviceUIDString;
@end
