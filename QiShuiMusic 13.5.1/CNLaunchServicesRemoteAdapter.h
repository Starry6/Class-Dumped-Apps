@interface CNLaunchServicesRemoteAdapter : NSObject
- (void)applicationsForUserActivityType:withReply:;
- (void)applicationsAvailableForHandlingURLScheme:withReply:;
- (void)applicationForBundleIdentifier:withReply:;
- (void)openUserActivityData:inApplication:withReply:;
- (void)openSensitiveURLInBackground:withOptions:withReply:;
+ (id)os_log;
+ (id)launchServicesAdapterInterface;
+ (id)createConnectionWithInterface:;
@end
