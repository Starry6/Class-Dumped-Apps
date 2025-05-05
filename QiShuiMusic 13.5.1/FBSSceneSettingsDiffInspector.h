@interface FBSSceneSettingsDiffInspector : FBSSettingsDiffInspector
- (void)observeInterfaceOrientationWithBlock:;
- (void)observeOcclusionsWithBlock:;
- (void)observeLevelWithBlock:;
- (void)observeIsForegroundWithBlock:;
- (void)observeFrameWithBlock:;
- (void)observeDisplayConfigurationWithBlock:;
- (void)observeClassWithBlock:;
- (void)observeIsBackgroundedWithBlock:;
@end
