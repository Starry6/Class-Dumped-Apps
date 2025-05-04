@interface AWESearchSugCacheStorage : NSObject
@property (nonatomic) NSMutableOrderedSet sugArray;
@property (nonatomic) NSMutableDictionary sugCacheDict;
@property (nonatomic) NSMutableDictionary storageDict;
@property (nonatomic) NSString currentUid;
- (id)currentUid;
- (void)setCurrentUid:;
- (id)sugArray;
- (id)sugCacheDict;
- (void)setSugArray:;
- (void)setSugCacheDict:;
- (id)getModelWithKeyword:type:;
- (void)addModel:keyword:;
- (void)saveCurrentMem;
- (void)checkIfNeedRemoveUponSizeLimit;
- (id)fetchSugCacheWithQuery:uid:type:;
- (void)saveSugResultInCache:uid:withQuery:;
- (void)removeModelByKeyword:;
- (id)allKeywords;
- (id)init;
- (void).cxx_destruct;
- (void)setStorageDict:;
- (id)storageDict;
- (void)resetStorage;
+ (id)sharedInstance;
@end
