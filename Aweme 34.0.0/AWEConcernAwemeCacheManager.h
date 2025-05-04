@interface AWEConcernAwemeCacheManager : NSObject
@property (nonatomic) NSMutableDictionary awemeCachedInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDomainInfo:containerID:domain:;
- (void)cacheAweme:widthInfo:;
- (id)awemeCachedInfo;
- (void)updateAweme:newAweme:;
- (id)awe_convertDictToModel:;
- (void)storeAwemeCache:withConfig:;
- (void)clearAwemeCache:errorMsg:;
- (void)updateAwemeCache:errorMsg:;
- (id)getDomainInfoWithcontainerID:domain:;
- (void)setAwemeCachedInfo:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
