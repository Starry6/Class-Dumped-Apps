@interface AWEFavoriteV2TabDetailManager : NSObject
- (id)storageKey;
- (id)filterTabItemArray:;
- (id)itemRedDotAccessibilityText:;
- (id)othersStorageKeyWithUserID:;
- (id)buildTabData:;
- (BOOL)shouldAddToTabItemArray:;
- (BOOL)hasECommerce;
- (BOOL)hasTabCacheWithUser:;
- (void)requestFavoriteTabDetailWithParams:userModel:needCacheAfterRequest:completion:;
+ (id)sharedInstance;
@end
