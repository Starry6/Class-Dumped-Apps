@interface FBSProfileManager : NSObject
@property (nonatomic) BOOL started;
- (BOOL)isStarted;
- (id)init;
- (void)dealloc;
- (void)startService;
- (void).cxx_destruct;
- (void)_managedAppsChangedNotification:;
- (BOOL)isManaged:;
- (id)profilesForSignerIdentity:;
- (void)_reloadProfiles;
- (void)_workQueue_reloadProfiles;
- (void)_workQueue_reloadManagedApplicationBundleIDs;
+ (id)sharedInstance;
@end
