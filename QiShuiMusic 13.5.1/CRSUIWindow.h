@interface CRSUIWindow : UIWindow
@property (nonatomic) CRSUIApplicationSceneSettingsDiffInspector settingsDiffInspector;
@property (nonatomic) double bannerHeight;
@property (nonatomic) NSLayoutConstraint heightConstraint;
@property (nonatomic) UILayoutGuide notificationLayoutGuide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithWindowScene:;
- (void)setHeightConstraint:;
- (id)heightConstraint;
- (void)commonInit;
- (void)_performActionsForUIScene:withUpdatedFBSScene:settingsDiff:fromSettings:transitionContext:lifecycleActionType:;
- (id)_settings;
- (void).cxx_destruct;
- (id)_mapSettings;
- (double)bannerHeight;
- (void)setBannerHeight:;
- (void)_setMapStyle:;
- (void)_updateMapStyleTrait;
- (void)notificationLayoutGuideDidChange;
- (id)notificationLayoutGuide;
- (id)settingsDiffInspector;
- (void)setSettingsDiffInspector:;
+ (id)_stringForStyle:;
@end
