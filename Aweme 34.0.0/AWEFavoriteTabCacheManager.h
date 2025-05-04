@interface AWEFavoriteTabCacheManager : NSObject
+ (void)storeCollectsTotalStatus:userID:;
+ (id)storageKeyWithUserID:;
+ (long long)collectsTotalStatusWithUserID:;
+ (BOOL)hasTabCacheWithUserModel:;
+ (id)getCachedTabDataWithUserModel:;
+ (void)cacheTabDataWithModels:userModel:;
+ (id)othersStorageKeyWithUserID:;
+ (id)tabItemModel:;
+ (id)tabItemInfo:;
+ (void)removeCachedTabDataWithUserModel:;
+ (BOOL)isCurrentUser:;
@end
