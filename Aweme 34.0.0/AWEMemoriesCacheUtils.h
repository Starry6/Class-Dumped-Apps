@interface AWEMemoriesCacheUtils : NSObject
+ (void)copyAssetsForThemeId:toDraftFolder:;
+ (BOOL)cleanMemoriesDraftFolders;
+ (id)memoriesDraftPath;
+ (id)memoriesAssetPathWithThemeId:;
+ (void)createMemoriesDraftPathIfNotExist;
+ (void)createMemoriesAssetDirectoryWithThemeId:forceRecreate:;
+ (id)copyAssetAtURL:toThemePath:;
@end
