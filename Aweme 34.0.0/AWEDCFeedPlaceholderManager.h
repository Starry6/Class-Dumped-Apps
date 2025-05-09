@interface AWEDCFeedPlaceholderManager : NSObject
@property (nonatomic) AWEDCFeedPlaceholderConfig config;
@property (nonatomic) NSMutableDictionary placeholderCacheDic;
@property (nonatomic) NSArray cacheModelArray;
@property (nonatomic) NSString placeholderImageCacheKey;
@property (nonatomic) q recordStartIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)loadPlaceholderDataCompletion:;
- (void)cachePlaceholderData:startIndexType:;
- (void)setRecordStartIndex:;
- (id)classNameWithBusinessID;
- (void)setCacheModelArray:;
- (long long)recordStartIndex;
- (id)cacheModelArray;
- (id)placeholderModelCacheKey;
- (id)placeholderModelCacheTimeStampKey;
- (void)storePlaceholderImageToDiskForModels:;
- (id)placeholderImageCacheKey;
- (id)receiveOuterPlaceholderCache;
- (id)placeholderCacheDic;
- (void)setPlaceholderCacheDic:;
- (void)setPlaceholderImageCacheKey:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (long long)placeholderCount;
- (void).cxx_destruct;
+ (id)getCurrentImageCacheKeyWithBusinessID:distinguishUser:;
+ (void)preloadPlaceholderDataWithPayload:completion:;
+ (void)setPreloadedHistoryData:payload:;
+ (void)registerPlaceholderImageCacheWithBusinessID:distinguishUser:cacheCount:diskSizeLimit:;
+ (id)preloadBusinessState;
+ (id)preloadedPlaceholderDataDict;
+ (id)getPlaceholderModelCacheKeyWithBusinessID:distinguishUser:;
+ (BOOL)getPlaceHolderIsPreloadingWithKey:;
+ (void)updatePlaceHolderIsPreloading:withKey:;
+ (id)preloadBusinessCompleteDict;
+ (id)preloadBusinessCompleteDictLock;
+ (void)preloadPlaceholderImageWithCacheModels:businessID:distinguishUser:;
+ (id)preloadedPlaceholderDataDictLock;
+ (void)readPlaceholderDataFromDiskWithBusinessID:distinguishUser:cacheWhenNotLogin:disableCache:enable7DayInvalid:async:completion:;
+ (id)getPlaceholderImageCacheConfigWithCacheCount:diskSizeLimit:;
+ (id)getPlaceholderModelCacheTimeStampKeyWithBusinessID:distinguishUser:;
+ (id)generateCacheKeyWithPrefix:businessID:distinguishUser:;
+ (id)getCurrentUserID;
+ (BOOL)is7DayAgo:;
@end
