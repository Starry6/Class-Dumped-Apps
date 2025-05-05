@interface SSAppPurchaseHistoryCache : NSObject
- (id)init;
- (unsigned long long)purgeableSpace;
- (id)allUncachedImages:;
- (id)imageDataForAdamID:;
- (void).cxx_destruct;
- (id)allUncachedImages;
- (unsigned long long)purge:;
- (id)initWithAccount:;
- (BOOL)setImageData:forAdamID:imageToken:;
- (void)clearCacheForAdamID:;
@end
