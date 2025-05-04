@interface AWEPOIBcmPrefetchVirtualCacheManager : NSObject
@property (nonatomic) NSMutableDictionary bcmCacheDict;
- (void)setBcmVirtualCacheWithFinalBtm:bcmMap:cacheKey:;
- (id)getBcmVirtualCacheForUUID:;
- (void)removeBcmVirtualCacheForUUID:;
- (id)bcmCacheDict;
- (void)clearAllBcmVirtualCache;
- (void)setBcmCacheDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
