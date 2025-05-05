@interface FBSSettingsDiff : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)encodeWithXPCDictionary:;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (void).cxx_destruct;
- (void)inspectChangesWithBlock:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)keyDescriptionForSetting:;
- (id)descriptionWithMultilinePrefix:;
- (void)evaluateWithInspector:context:;
- (id)settings:valueDescriptionForFlag:object:ofSetting:;
- (id)settings:keyDescriptionForSetting:;
- (id)settingsByApplyingToMutableCopyOfSettings:;
- (id)initWithChanges:fromSettings:toSettings:;
- (id)_initWithChanges:otherSettingsDiff:settingsClass:;
- (void)inspectOtherChangesWithBlock:;
@end
