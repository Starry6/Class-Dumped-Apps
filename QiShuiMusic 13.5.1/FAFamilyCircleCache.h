@interface FAFamilyCircleCache : NSObject
@property (nonatomic) ACAccount account;
- (id)account;
- (id)load;
- (id)load:;
- (id)_username;
- (id)_cacheDataWithFamilyCircle:serverTag:;
- (id)_cacheURL;
- (void).cxx_destruct;
- (id)_cacheURLWithError:;
- (BOOL)_isCacheDate:withinDuration:;
- (id)updateWithFamilyCircle:serverTag:;
- (id)_fetchData:;
- (id)initWithAccount:;
- (id)_onQueue:;
- (id)_createCacheFile;
- (id)invalidate;
+ (id)cacheQueue;
@end
