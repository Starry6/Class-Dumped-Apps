@interface TTVideoDataCenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSHashTable<TTVideoDataAudienceProtocol> audiences;
@property (nonatomic) NSMapTable<TTVideoDataCenterProtocol> dataSources;
- (id)billboard;
- (id)currentEngine:;
- (id)getNumberValueForKey:param:defaultValue:;
- (long long)playerCoreBuffer:traceID:;
- (void)postEvent:param:;
- (void)registerAudience:;
- (void)registerDataSource:forKey:;
- (id)dataSources;
- (id)init;
- (void)dealloc;
- (void)setDataSources:;
- (void).cxx_destruct;
- (void)setAudiences:;
- (id)audiences;
+ (id)defaultCenter;
+ (void)destroy;
@end
