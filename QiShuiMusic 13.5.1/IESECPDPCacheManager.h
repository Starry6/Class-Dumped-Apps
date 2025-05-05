@interface IESECPDPCacheManager : NSObject
@property (nonatomic) BOOL hasLoadCache;
@property (nonatomic) NSString originCacheKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheWithAPIPathAndParams:params:;
- (BOOL)hasLoadCache;
- (id)originCacheKey;
- (void)setHasLoadCache:;
- (void)setOriginCacheKey:;
- (void).cxx_destruct;
- (void)storeResponse:;
+ (id)processPromotionPackCacheKeys:;
@end
