@interface AWEFavoriteMigrateManager : NSObject
@property (nonatomic) NSMutableDictionary abTestDict;
- (void)handleABTestChange:;
- (BOOL)enableFavoriteMigration;
- (BOOL)enableFavoriteLandingOptimizeAfterMigrated;
- (long long)favoriteMigrationStrategy:;
- (BOOL)enableFavoriteMigration:;
- (long long)readCommonABTestStrategy:prefix:abTestBlock:;
- (id)abTestDict;
- (id)storageKey:userID:;
- (unsigned long long)favoriteTabCategoryOptimize:;
- (id)abTestInfoFor:;
- (void)setAbTestDict:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
