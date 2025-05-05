@interface MIKeychainAccessGroupTracker : NSObject
@property (nonatomic) NSCountedSet refs;
@property (nonatomic) NSObject<OS_dispatch_queue> q;
- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)q;
- (void)_onQueue_discoverReferences;
- (void)reconcile;
- (BOOL)_onQueue_addReferencesForBundle:error:;
- (BOOL)addReferencesForBundle:error:;
- (BOOL)_onQueue_updateReferencesWithOldBundle:newBundle:error:;
- (BOOL)updateReferencesWithOldBundle:newBundle:error:;
- (BOOL)_onQueue_removeReferencesForBundle:error:;
- (BOOL)removeReferencesForBundle:error:;
- (BOOL)_removeGroupsWithError:error:;
- (id)_keychainAccessGroupsForBundle:error:;
- (id)_keychainAccessGroupsForApp:error:;
- (id)refs;
- (void)setRefs:;
+ (id)sharedTracker;
@end
