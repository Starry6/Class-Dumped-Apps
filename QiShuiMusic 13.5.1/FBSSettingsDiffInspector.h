@interface FBSSettingsDiffInspector : NSObject
- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (void)inspectDiff:withContext:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (void)observeOtherSetting:withBlock:;
- (void)_observeSetting:withBlock:;
- (void)_addObserver:forSetting:inInfo:;
@end
