@interface AWEGrouponCacheToken : MTLModel
@property (nonatomic) q hasPermissionInCache;
@property (nonatomic) NSString cityCodeInCache;
@property (nonatomic) NSString userIdInCache;
@property (nonatomic) NSString appVersion;
@property (nonatomic) q cacheStroeTimeStamp;
@property (nonatomic) q timeoutInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLocationPermission:cityCode:userID:storeTs:;
- (long long)hasPermissionInCache;
- (void)setHasPermissionInCache:;
- (id)cityCodeInCache;
- (void)setCityCodeInCache:;
- (id)userIdInCache;
- (void)setUserIdInCache:;
- (long long)cacheStroeTimeStamp;
- (void)setCacheStroeTimeStamp:;
- (long long)timeoutInterval;
- (void)setTimeoutInterval:;
- (id)appVersion;
- (void)setAppVersion:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
