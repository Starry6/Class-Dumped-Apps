@interface AWERecordBeautyCacheManager : NSObject
@property (nonatomic) NSString cacheSuffixKey;
@property (nonatomic) NSString contentCacheKey;
@property (nonatomic) NSString defaultUserIdCacheKey;
- (id)defaultUserId;
- (id)generateStatusDictionaryForCacheWithState:;
- (void)saveCacheWithUid:gender:dict:;
- (id)getCacheDictWithUid:gender:;
- (void)removeCacheWithUid:gender:;
- (void)saveCacheWithUid:gender:beautyState:;
- (void)saveCacheWithUid:genders:beautyState:;
- (BOOL)hasCacheForUid:gender:;
- (BOOL)isCachedBeautyOnForGender:;
- (id)initWithCacheSuffixKey:;
- (id)contentCacheKey;
- (void)trackerEventName:uid:dict:;
- (id)defaultUserIdCacheKey;
- (id)cacheSuffixKey;
- (BOOL)isEnableTrackerStatus;
- (id)itemsWithInfo:;
- (id)trackerBaseEventWithUid:;
- (void)setCacheSuffixKey:;
- (void)setContentCacheKey:;
- (void)setDefaultUserIdCacheKey:;
- (id)init;
- (void).cxx_destruct;
+ (long long)lastUsedGender;
+ (void)saveLastUsedGender:;
@end
