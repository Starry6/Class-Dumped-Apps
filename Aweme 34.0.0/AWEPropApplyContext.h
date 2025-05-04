@interface AWEPropApplyContext : NSObject
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) <CameraSessionManagerProtocol> cameraSessionManager;
@property (nonatomic) <ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cameraService;
- (void)setCameraService:;
- (id)switchModeService;
- (void)setSwitchModeService:;
- (id)cameraSessionManager;
- (void)setCameraSessionManager:;
- (id)systemLivePhotoService;
- (void)setSystemLivePhotoService:;
- (void).cxx_destruct;
@end
