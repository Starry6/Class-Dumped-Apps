@interface AWEIMFileObjectUploadCacheService : HTSService
@property (nonatomic) YYCache responseCache;
@property (nonatomic) NSDictionary cacheStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)p_cacheKeyForMD5:;
- (void)saveUploadResult:forMD5:;
- (id)readUploadResultForMD5:;
- (void).cxx_destruct;
- (id)cacheStrategy;
- (void)setCacheStrategy:;
- (id)responseCache;
- (void)setResponseCache:;
@end
