@interface IESLiveNewDressResourceManager : NSObject
@property (nonatomic) <IESLiveNewDressResourceLoader> loader;
@property (nonatomic) <IESLiveNewDressResourceCache> cache;
@property (nonatomic) <IESLiveNewDressDataService> dataService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (id)dataService;
- (id)getDressResourceWithDressID:error:;
- (id)initWithDressDataService:;
- (void)loadDressResourceWithDressID:source:error:;
- (void)prefetchDressResourceWithDressID:source:;
- (void)prefetchDressResourceWithDressIDs:source:;
- (void)registerDressResourceLoadProcessorClass:;
- (void)registerDressResourceModelCacheClass:;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (id)loader;
- (void)setLoader:;
@end
