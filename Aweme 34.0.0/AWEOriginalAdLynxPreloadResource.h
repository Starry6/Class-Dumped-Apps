@interface AWEOriginalAdLynxPreloadResource : MTLModel
@property (nonatomic) AWEURLModel alphaVideoUrl;
@property (nonatomic) NSArray alphaVideoUrls;
@property (nonatomic) NSArray preloadResource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alphaVideoUrls;
- (id)alphaVideoUrl;
- (id)preloadResource;
- (void)setAlphaVideoUrl:;
- (void)setAlphaVideoUrls:;
- (void)setPreloadResource:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)alphaVideoUrlsJSONTransformer;
+ (id)preloadResourceJSONTransformer;
@end
