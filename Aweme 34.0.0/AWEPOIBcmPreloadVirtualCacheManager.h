@interface AWEPOIBcmPreloadVirtualCacheManager : NSObject
@property (nonatomic) NSMutableDictionary bcmCacheDict;
- (id)setBcmVirtualCacheWithFinalBtm:bcmMap:;
- (id)getBcmVirtualCacheForUUID:;
- (void)removeBcmVirtualCacheForUUID:;
- (id)bcmCacheDict;
- (void)clearAllBcmVirtualCache;
- (void)setBcmCacheDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
