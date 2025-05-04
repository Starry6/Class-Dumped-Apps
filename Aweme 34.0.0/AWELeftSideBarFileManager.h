@interface AWELeftSideBarFileManager : NSObject
+ (id)storageKeyWithUserID:;
+ (id)getLeftSideCacheDirectories;
+ (id)getLeftSideCachePathWithUserKey:;
+ (id)getLeftSideCacheDataModelWithFilePath:;
+ (id)getLeftSideCacheDataWithFilePath:;
+ (id)getHomePageMMKV;
+ (void)deleteLeftSideBarDynamicCacheData;
+ (id)getLeftSideDynamicDataCachePath;
+ (BOOL)leftSideCacheDirectoriesHasFile;
+ (id)getLeftSideCacheDataWithUserID:;
+ (void)writeLeftSideData:userID:completion:;
+ (void)deleteLeftSideBarCacheData;
+ (void)writeLeftSideDynamicData:async:;
+ (void)getLeftSideDynamicDataWithAsync:completion:;
@end
