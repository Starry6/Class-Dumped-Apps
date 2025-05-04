@interface AWERVCacheManager : NSObject
@property (nonatomic) NSMutableDictionary relatedVideoCache;
@property (nonatomic) NSMutableDictionary awemeModelCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCache:itemID:;
- (void)setAwemeCache:itemID:;
- (id)relatedVideoCache;
- (void)setRelatedVideoCache:;
- (id)awemeModelCache;
- (void)setAwemeModelCache:;
- (id)cacheWithItemID:;
- (id)awemeCacheWithItemID:;
- (void)removeCacheWithItemID:;
- (void)trackCache:itemID:enterMethod:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
