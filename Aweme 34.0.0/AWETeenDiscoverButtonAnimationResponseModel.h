@interface AWETeenDiscoverButtonAnimationResponseModel : AWEBaseApiModel
@property (nonatomic) AWETeenDiscoverNavConfigModel discovery;
- (id)discovery;
- (void).cxx_destruct;
- (void)setDiscovery:;
+ (id)discoveryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
