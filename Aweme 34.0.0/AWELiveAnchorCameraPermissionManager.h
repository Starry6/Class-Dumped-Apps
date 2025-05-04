@interface AWELiveAnchorCameraPermissionManager : NSObject
@property (nonatomic) NSHashTable permissionHandlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)registerCameraPermissionHandler:;
- (void)removeCameraPermissionHandler:;
- (BOOL)canHandleVideoCapture;
- (id)permissionHandlers;
- (void)setPermissionHandlers:;
- (void)dealloc;
- (void).cxx_destruct;
@end
