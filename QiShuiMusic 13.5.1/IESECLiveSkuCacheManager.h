@interface IESECLiveSkuCacheManager : NSObject
@property (nonatomic) NSMutableDictionary skuCache;
@property (nonatomic) <IESECLiveSkuCacheUpdateDelegate> delegate;
- (void)setSkuCache:;
- (id)skuCache;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (void)clearAllSkuCache;
+ (id)selectIDsForPromotionID:;
+ (void)setSelectIDs:forPromotionID:;
+ (id)shared;
@end
