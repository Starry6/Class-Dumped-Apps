@interface IESPrefetchManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary loaderDictionary;
@property (nonatomic) NSMutableArray schemaResolvers;
- (id)schemaResolvers;
- (id)registerCapability:forBusiness:;
- (void)addDefaultSchemaResolver;
- (id)allBiz;
- (void)bindGeckoAccessKey:channels:forBusiness:;
- (id)loaderDictionary;
- (id)loaderForBusiness:;
- (void)prefetchDataWithWebUrl:;
- (void)registerSchemaResolver:;
- (void)removeLoaderForBusiness:;
- (void)setLoaderDictionary:;
- (void)setSchemaResolvers:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedInstance;
@end
