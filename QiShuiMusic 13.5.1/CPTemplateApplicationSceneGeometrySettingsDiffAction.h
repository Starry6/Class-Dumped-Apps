@interface CPTemplateApplicationSceneGeometrySettingsDiffAction : NSObject
@property (nonatomic) UIApplicationSceneSettingsDiffInspector sceneSettingsGeometryMutationDiffInspector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSceneSettingsGeometryMutationDiffInspector:;
- (void)_updateSceneGeometryWithSettingObserverContext:windowScene:transitionContext:;
- (void)_performActionsForUIScene:withUpdatedFBSScene:settingsDiff:fromSettings:transitionContext:lifecycleActionType:;
- (void).cxx_destruct;
- (id)sceneSettingsGeometryMutationDiffInspector;
@end
