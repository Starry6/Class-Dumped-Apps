@interface LynxResourceService : NSObject
@property (nonatomic) IESForestKit forestKit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addForestKit:Key:;
- (void)addResourceLoader:TemplateUrl:;
- (void)cancelPreloadMedia:videoID:videoModel:;
- (id)fetchResourceAsync:parameters:completion:;
- (id)fetchResourceSync:parameters:error:;
- (id)forestKit;
- (id)geckoResourcePathForURLString:;
- (id)getForestKitByKey:;
- (BOOL)isGeckoResource:;
- (void)preloadMedia:cacheKey:videoID:videoModel:resolution:encodeType:apiString:size:;
- (void)setForestKit:;
- (id)init;
- (void).cxx_destruct;
+ (id)createRequestParams:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
