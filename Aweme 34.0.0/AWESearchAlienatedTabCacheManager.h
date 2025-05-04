@interface AWESearchAlienatedTabCacheManager : NSObject
@property (nonatomic) NSMutableDictionary exitInfoFromAllUsers;
@property (nonatomic) NSMutableDictionary alienatedTabsFromAllUsers;
@property (nonatomic) NSMutableDictionary cachedAlienatedTabs;
- (id)exitInfoFromAllUsers;
- (id)exitInfoCacheKeyWithModel:;
- (void)setExitInfoFromAllUsers:;
- (id)alienatedTabsFromAllUsers;
- (void)setAlienatedTabsFromAllUsers:;
- (id)exitInfoForModel:;
- (void)saveExitInfo:forModel:;
- (id)cachedAlienatedTabs;
- (void)saveAlienatedTabs:;
- (void)setCachedAlienatedTabs:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
