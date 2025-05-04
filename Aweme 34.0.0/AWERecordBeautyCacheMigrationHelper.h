@interface AWERecordBeautyCacheMigrationHelper : NSObject
@property (nonatomic) AWEComposerBeautyCacheViewModel aweCacheManager;
- (void)p_setupOldCacheManager;
- (void)p_migrateDataIfNeededWithCacheManager:itemModels:rootNode:gender:;
- (id)aweCacheManager;
- (id)p_generateValueCacheKeyForOldCacheWithresourceID:tag:gender:;
- (long long)convertToAWEGenderFromCKGender:;
- (id)migrateCacheFromOldToNewWithItemModels:rootNode:gender:;
- (void)migrateDataIfNeededWithCacheManager:itemModels:rootNode:;
- (void)setAweCacheManager:;
- (id)init;
- (void).cxx_destruct;
@end
