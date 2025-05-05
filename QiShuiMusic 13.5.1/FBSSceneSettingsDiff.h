@interface FBSSceneSettingsDiff : FBSSettingsDiff
- (id)valueDescriptionForFlag:object:ofSetting:;
- (id)keyDescriptionForSetting:;
- (void)evaluateWithInspector:context:;
- (id)settingsByApplyingToMutableCopyOfSettings:;
+ (id)diffFromSettings:toSettings:;
@end
