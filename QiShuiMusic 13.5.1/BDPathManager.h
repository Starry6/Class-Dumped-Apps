@interface BDPathManager : NSObject
- (long long)_totalFilesSize;
- (void)applicationDidBecomeActiveNoti:;
- (void)_asyncTriggerCleanEventForOpportunity:needSize:completion:;
- (void)_cleanupDeletableFiles;
- (long long)_deletableFilesSize;
- (BOOL)_registerModuleRootComponent:;
- (id)_rootComponentWithName:;
- (long long)_triggerCleanEventForOpportunity:needSize:;
- (void)applicationDidEnterBackgroundNoti:;
- (void)applicationWillTerminateNoti:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)cleanupDeletableFiles;
+ (void)cleanupDeletableFilesWithCompletion:;
+ (long long)deletableFilesSize;
+ (void)deletableFilesSizeWithCompletion:;
+ (BOOL)registerModuleRootComponent:;
+ (id)rootComponentWithName:;
+ (long long)totalFilesSize;
+ (void)totalFilesSizeWithCompletion:;
+ (long long)triggerCleanEventForOpportunity:needSize:;
+ (void)triggerCleanEventForOpportunity:needSize:completion:;
+ (id)sharedInstance;
@end
