@interface FBSSceneClientSettingsDiffInspector : FBSSettingsDiffInspector
- (void)observePreferredSceneHostIdentityWithBlock:;
- (void)observePreferredSceneHostIdentifierWithBlock:;
- (void)observeOcclusionsWithBlock:;
- (void)observeLayersWithBlock:;
- (void)observeClassWithBlock:;
- (void)observePreferredLevelWithBlock:;
- (void)observePreferredInterfaceOrientationWithBlock:;
@end
