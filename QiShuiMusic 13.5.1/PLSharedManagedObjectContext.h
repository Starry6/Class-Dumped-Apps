@interface PLSharedManagedObjectContext : PLManagedObjectContext
- (void)_mergeChangesFromDidSaveDictionary:usingObjectIDs:;
- (BOOL)_hasChangesForCloudShared:;
- (void)performBlockAndWait:;
- (void)tearDownLocalChangeNotifications;
- (void).cxx_destruct;
- (void)setupLocalChangeNotifications;
- (void)performBlock:;
- (BOOL)isUserInterfaceContext;
- (BOOL)shouldMergeFromRemoteContextWithChanges:;
@end
