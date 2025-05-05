@interface BDXPreloadConfigBuilder : NSObject
@property (nonatomic) BOOL internal_fromRouter;
@property (nonatomic) NSString urlString;
@property (nonatomic) BDXPreloadStrategy strategy;
@property (nonatomic) BDXResourceLoaderTaskConfig taskConfig;
@property (nonatomic) NSDictionary configJSONObject;
@property (nonatomic) @? processBlock;
@property (nonatomic) BOOL triggerPrefetch;
@property (nonatomic) NSString prefetchBusiness;
- (BOOL)triggerPrefetch;
- (id)configJSONObject;
- (BOOL)internal_fromRouter;
- (id)prefetchBusiness;
- (void)setConfigJSONObject:;
- (void)setInternal_fromRouter:;
- (void)setPrefetchBusiness:;
- (void)setTaskConfig:;
- (void)setTriggerPrefetch:;
- (id)taskConfig;
- (id)urlString;
- (id)strategy;
- (id)processBlock;
- (void)setProcessBlock:;
- (void).cxx_destruct;
- (void)setStrategy:;
- (void)setUrlString:;
@end
