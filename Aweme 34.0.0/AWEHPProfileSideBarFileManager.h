@interface AWEHPProfileSideBarFileManager : NSObject
- (id)aAWEHPProfileSideBarCommonAdapter;
+ (id)defaultSideBarData;
+ (id)cacheDataPathWithUserID:;
+ (id)getCacheDataWithUserID:;
+ (id)storageKeyWithUserID:;
+ (Class)aAWEHPProfileSideBarCommonAdapterClass;
+ (void)writeCacheData:withUserID:;
+ (void)deleteCacheDataWithUserID:;
+ (id)getCacheModelWithUserID:;
+ (id)defaultSideBarModel;
@end
