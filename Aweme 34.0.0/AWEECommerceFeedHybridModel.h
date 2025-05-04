@interface AWEECommerceFeedHybridModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary extra;
- (id)aweme;
- (void)setExtra:;
- (void)setAweme:;
- (id)extra;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
