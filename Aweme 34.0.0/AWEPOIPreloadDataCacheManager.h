@interface AWEPOIPreloadDataCacheManager : NSObject
@property (nonatomic) YYMemoryCache dataCache;
- (id)templateKey:;
- (id)bizDataInStorageWithKey:;
- (void)updateStorageBizData:forKey:;
- (id)storageKeyWithTemplateKey:;
- (id)bizDataWithKey:;
- (void)updateCacheWithBizData:forKey:;
- (id)dataCache;
- (void).cxx_destruct;
- (void)setDataCache:;
+ (id)sharedInstance;
@end
