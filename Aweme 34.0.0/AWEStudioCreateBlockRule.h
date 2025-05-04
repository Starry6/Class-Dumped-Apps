@interface AWEStudioCreateBlockRule : AWEExternalRouterBlockBaseRule
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
+ (BOOL)needBlockURLString:;
+ (void)handleBlockAction:;
+ (BOOL)_isCameraLockScreenWidget:;
+ (BOOL)_isInQRCodePage;
+ (BOOL)_isMomentsCameraLockScreenWidet:;
+ (BOOL)_isScanCameraLockScreenWidet:;
+ (BOOL)_isLockScreenWidget:widget:;
@end
