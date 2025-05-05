@interface TTVideoEngineDNSCache : NSObject
@property (nonatomic) NSMutableDictionary resolvedDomainDic;
@property (nonatomic) q networkType;
@property (nonatomic) NSString expiredTime;
- (void)setExpiredTime:;
- (BOOL)cacheHost:respondJson:;
- (void)clearHost;
- (id)expiredTime;
- (BOOL)isCacheHostVaild:andExpiredTime:;
- (id)resolveHost:;
- (id)resolvedDomainDic;
- (void)setResolvedDomainDic:;
- (long long)networkType;
- (id)init;
- (void)setNetworkType:;
- (void).cxx_destruct;
+ (id)shareCache;
@end
