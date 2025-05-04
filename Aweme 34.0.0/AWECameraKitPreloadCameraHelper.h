@interface AWECameraKitPreloadCameraHelper : NSObject
+ (BOOL)p_isNeedCreateCameraWithPublishViewModel:;
+ (BOOL)shouldPreloadCameraWithInputData:;
+ (void)preloadCameraWithInputData:preloadTrackService:configService:switchModeService:cameraSessionManager:captureFeatureConfig:;
@end
