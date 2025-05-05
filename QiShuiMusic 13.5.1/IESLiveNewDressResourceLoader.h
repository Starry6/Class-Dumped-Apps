@interface IESLiveNewDressResourceLoader : NSObject
@property (nonatomic) NSMutableDictionary processors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveNewDressResourceCache> cache;
- (void)addDressResourceLoadProcessorClass:;
- (BOOL)loadDressResourceWithDress:error:;
- (void)loadProcessor:didLoadDress:duration:error:loadedResource:dressResource:;
- (void)setProcessors:;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (id)processors;
@end
