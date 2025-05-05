@interface WBReusableTabManager : NSObject
@property (nonatomic) NSSet allGroupsTabsUUIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)windowStates;
- (id)init;
- (void)tabGroupManager:didRemoveTabGroup:;
- (void)_cleanUp;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
- (id)tabGroupManager;
- (id)_referenceToTabWithUUID:;
- (id)reuseTabForUUID:;
- (BOOL)isTabSuspended:;
- (void)addReusableTab:;
- (void)enumerateReusableTabs:;
- (void)_scheduleCleanup;
- (id)allGroupsTabsUUIDs;
- (void)_addTabUUIDsFromGroup:toSet:;
+ (id)sharedManager;
@end
