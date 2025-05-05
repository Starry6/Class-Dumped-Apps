@interface ASDAppLibrary : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
+ (id)interface;
+ (long long)launchApp:;
+ (void)uninstallApp:requestUserConfirmation:withResultHandler:;
+ (long long)launchApp:onPairedDevice:;
+ (id)sharedInstance;
+ (long long)launchMessagesExtensionForApp:;
+ (void)uninstallApp:withResultHandler:;
+ (unsigned char)openableStatusForExecutableAtPath:;
+ (void)launchApp:withResultHandler:;
+ (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:withResultHandler:;
+ (void)launchApp:onPairedDevice:withResultHandler:;
+ (void)launchMessagesExtensionForApp:withResultHandler:;
+ (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:withResultHandler:;
+ (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:withResultHandler:;
+ (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:withResultHandler:;
@end
