@interface CRSUIClusterWindow : CRSUIWindow
@property (nonatomic) CARObserverHashTable observers;
@property (nonatomic) CRSUIInstrumentClusterSettingsDiffInspector clusterSettingsDiffInspector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)commonInit;
- (void)_performActionsForUIScene:withUpdatedFBSScene:settingsDiff:fromSettings:transitionContext:lifecycleActionType:;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
- (unsigned long long)layoutJustification;
- (void)handleZoomInDirection:;
- (void)addClusterSettingsObserver:;
- (void)removeClusterSettingsObserver:;
- (unsigned long long)etaSetting;
- (unsigned long long)compassSetting;
- (unsigned long long)speedLimitSetting;
- (id)_clusterSettings;
- (id)clusterSettingsDiffInspector;
- (void)setClusterSettingsDiffInspector:;
@end
