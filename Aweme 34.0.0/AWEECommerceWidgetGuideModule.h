@interface AWEECommerceWidgetGuideModule : HTSService
@property (nonatomic) <AWEECWidgetGuideManagerService> adapterManager;
@property (nonatomic) <AWEECWidgetGuideManagerService> widgetManager;
@property (nonatomic) UIImage widgetLiveToolItemIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)checkWidgetInstallStateWithCompletion:;
- (id)adapterManager;
- (id)widgetLiveToolItemIcon;
- (id)widgetManager;
+ (void)registerListenerOrPreloadAfterPitayaReady;
+ (BOOL)enableWidgetPitayaFrequency;
+ (BOOL)enableDesktopIcon;
+ (BOOL)enableWidgetOptimize;
+ (BOOL)enableWidgetNewOptimize;
+ (void)registerListenerOrPreload;
+ (id)settings;
@end
