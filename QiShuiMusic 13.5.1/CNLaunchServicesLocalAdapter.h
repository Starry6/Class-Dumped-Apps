@interface CNLaunchServicesLocalAdapter : NSObject
@property (nonatomic) LSApplicationWorkspace workspace;
- (id)workspace;
- (id)initWithApplicationWorkspace:;
- (void).cxx_destruct;
- (void)setWorkspace:;
- (void)applicationsForUserActivityType:withReply:;
- (void)applicationsAvailableForHandlingURLScheme:withReply:;
- (void)applicationForBundleIdentifier:withReply:;
- (void)openUserActivityData:inApplication:withReply:;
- (void)openSensitiveURLInBackground:withOptions:withReply:;
+ (id)lsApplicationWorkspaceForBundleId:;
@end
