@interface TMPrivacyManager : TMModule
@property (nonatomic) NSDictionary modules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__configPastardCacheEnv;
- (id)__monitorModuleConfig;
- (void)__setupConfig;
- (void)__setupMonitorSubscriberWithAPIControl;
- (void)__startMonitor;
- (void)__startMonitorWithAPIControl;
- (id)_allModuleClasses;
- (id)_configFromDict:withClass:;
- (void)closeMonitorHookIfNeed;
- (id)monitorConfig;
- (void)openTimonHookIfNeed;
- (void)setContextBlock:forApiType:;
- (void)setPermissionAspectorEnable;
- (void)updateWithConfig:;
- (void)start;
- (id)modules;
- (void).cxx_destruct;
- (void)setModules:;
@end
