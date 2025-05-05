@interface BLSPauseWhenSceneBackgroundAttribute : BLSSceneAttribute
- (BOOL)canBePaused;
+ (id)pauseWhenBackgroundScene:;
+ (id)pauseWhenBackgroundFBSScene:;
+ (id)pauseWhenBackgroundForFBSSceneIdentityToken:;
@end
