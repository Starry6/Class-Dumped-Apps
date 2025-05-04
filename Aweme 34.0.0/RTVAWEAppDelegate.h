@interface RTVAWEAppDelegate : RxApplicationDelegate
@property (nonatomic) NSArray rtvApplicationServices;
- (void)onAppHandleNotification;
- (id)applicationModules;
- (id)applicationServices;
- (id)__requiredApplicationModuleClasses;
- (id)__optionalApplicationModuleClassNames;
- (id)__applicationServicesClassNames;
- (void)appDidLaunch;
- (void)appAfterLaunch;
- (id)rtvApplicationServices;
- (void)setRtvApplicationServices:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
