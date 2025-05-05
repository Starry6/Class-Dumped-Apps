@interface IESLiveNewDressResourceCache : NSObject
@property (nonatomic) <IESLiveNewDressCacheFactory> cacheFactory;
@property (nonatomic) NSMutableDictionary modelCaches;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModelCaches:;
- (void)addDressResourceModelCache:;
- (void)addDressResourceModelCacheClass:;
- (id)cacheFactory;
- (BOOL)containsResourceForDressID:dressType:;
- (id)createModelCacheWithDressType:;
- (id)getModelCacheWithDressType:error:;
- (id)modelCaches;
- (id)resourceForDressID:dressType:error:;
- (void)setCacheFactory:;
- (BOOL)storeResource:forDressID:dressType:error:;
- (id)init;
- (void).cxx_destruct;
@end
