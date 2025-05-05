@interface CNLSApplicationWorkspace : NSObject
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setSchedulerProvider:;
- (void)openUserActivity:inApplication:options:completionHandler:;
- (id)schedulerProvider;
- (id)applicationsAvailableForHandlingURLScheme:;
- (id)applicationForBundleIdentifier:;
- (id)observableForApplicationsChangedWithSchedulerProvider:;
- (id)initWithSchedulerProvider:;
- (void)openSensitiveURLInBackground:withOptions:;
- (void).cxx_destruct;
- (id)applicationsForUserActivityType:;
- (void)openSensitiveURLInBackground:withOptions:completionHandler:;
+ (id)launchServices;
+ (id)inProcessLaunchServices;
+ (id)remoteAdapter;
@end
