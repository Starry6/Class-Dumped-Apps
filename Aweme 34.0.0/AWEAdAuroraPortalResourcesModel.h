@interface AWEAdAuroraPortalResourcesModel : MTLModel
@property (nonatomic) AWEURLModel ignitionUrl;
@property (nonatomic) AWEURLModel ignitionGlowingUrl;
@property (nonatomic) AWEURLModel shineUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ignitionUrl;
- (id)ignitionGlowingUrl;
- (id)shineUrl;
- (void)setIgnitionUrl:;
- (void)setIgnitionGlowingUrl:;
- (void)setShineUrl:;
- (void).cxx_destruct;
+ (id)ignitionUrlJSONTransformer;
+ (id)ignitionGlowingUrlJSONTransformer;
+ (id)shineUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
