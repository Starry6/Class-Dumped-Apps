@interface CPTemplateApplicationInstrumentClusterScene : UIScene
@property (nonatomic) CPInstrumentClusterController instrumentClusterController;
@property (nonatomic) UIWindow instrumentClusterWindow;
@property (nonatomic) CPUIContentStyleDiffInspector mapStyleInspector;
@property (nonatomic) <CPTemplateApplicationInstrumentClusterSceneDelegate> delegate;
@property (nonatomic) q contentStyle;
@property (nonatomic) UIScreen _screen;
@property (nonatomic) q _interfaceOrientation;
@property (nonatomic) <UICoordinateSpace> _coordinateSpace;
@property (nonatomic) UITraitCollection _traitCollection;
@property (nonatomic) UIStatusBarManager _statusBarManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (id)_traitCollection;
- (long long)_interfaceOrientation;
- (id)convertRect:toCoordinateSpace:;
- (id)convertPoint:toCoordinateSpace:;
- (id)convertRect:fromCoordinateSpace:;
- (id)convertPoint:fromCoordinateSpace:;
- (void)_performActionsForUIScene:withUpdatedFBSScene:settingsDiff:fromSettings:transitionContext:lifecycleActionType:;
- (unsigned long long)itemType;
- (void)_invalidate;
- (id)_screen;
- (void).cxx_destruct;
- (id)initWithSession:connectionOptions:;
- (id)_referenceBounds;
- (id)bounds;
- (BOOL)_permitContextCreationForBindingDescription:;
- (void)_attachWindow:;
- (void)_detachWindow:;
- (id)_fbsSceneLayerForWindow:;
- (id)_safeAreaInsetsForInterfaceOrientation:;
- (void)_updateSceneTraitsAndPushTraitsToScreen:;
- (void)_readySceneForConnection;
- (id)_definition;
- (void)_updateVisibleWindowOrderWithTest:;
- (void)_windowUpdatedVisibility:;
- (void)_windowUpdatedProperties:;
- (id)_allWindowsIncludingInternalWindows:onlyVisibleWindows:;
- (id)_coordinateSpace;
- (long long)contentStyle;
- (void)_updateContentStyle;
- (void)updateSceneForNewCompassSetting;
- (void)updateSceneForNewSpeedLimitSetting;
- (void)updateSceneForNewItemTypeSetting;
- (void)handleZoomInDirection:;
- (unsigned long long)compassSetting;
- (unsigned long long)speedLimitSetting;
- (id)_clusterSettings;
- (void)_refreshTraitCollection;
- (id)_componentForKey:;
- (id)_templateSettings;
- (long long)_mapStyle;
- (void)_deliverControllerToDelegate;
- (id)instrumentClusterController;
- (void)setInstrumentClusterController:;
- (id)instrumentClusterWindow;
- (void)setInstrumentClusterWindow:;
- (id)mapStyleInspector;
- (void)setMapStyleInspector:;
+ (BOOL)_hostsWindows;
@end
