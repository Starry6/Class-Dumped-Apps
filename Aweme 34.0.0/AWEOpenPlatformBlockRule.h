@interface AWEOpenPlatformBlockRule : AWEExternalRouterBlockBaseRule
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
- (BOOL)p_VCDShouldHandleURL:;
- (BOOL)p_OpenPlatformShouldHandleURL:;
- (BOOL)p_OpenPlatformHandleURL:linkSession:;
- (BOOL)p_VCDHandleURL:linkSession:;
@end
