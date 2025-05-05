@interface CNLaunchServices : NSObject
@property (nonatomic) <CNLaunchServicesAdapter> adapter;
@property (nonatomic) NSObject<OS_os_log> log;
- (id)init;
- (id)log;
- (void)setLog:;
- (id)initWithAdapter:;
- (id)applicationsAvailableForHandlingURLScheme:;
- (id)applicationForBundleIdentifier:;
- (id)adapter;
- (void).cxx_destruct;
- (id)applicationsForUserActivityType:;
- (void)openSensitiveURLInBackground:withOptions:completionHandler:;
- (void)openUserActivityData:inApplication:completionHandler:;
- (void)setAdapter:;
@end
