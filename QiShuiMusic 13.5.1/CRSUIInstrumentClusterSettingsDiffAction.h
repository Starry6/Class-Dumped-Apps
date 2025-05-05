@interface CRSUIInstrumentClusterSettingsDiffAction : NSObject
@property (nonatomic) CRSUIInstrumentClusterSettingsDiffInspector instrumentClusterSettingsDiffInspector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_performActionsForUIScene:withUpdatedFBSScene:settingsDiff:fromSettings:transitionContext:lifecycleActionType:;
- (void).cxx_destruct;
- (id)sceneSettingsGeometryMutationDiffInspector;
- (id)instrumentClusterSettingsDiffInspector;
- (void)setInstrumentClusterSettingsDiffInspector:;
@end
