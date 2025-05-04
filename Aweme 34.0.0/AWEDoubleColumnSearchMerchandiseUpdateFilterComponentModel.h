@interface AWEDoubleColumnSearchMerchandiseUpdateFilterComponentModel : AWEBaseApiModel
@property (nonatomic) NSArray path;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel render;
- (id)path;
- (void).cxx_destruct;
- (void)setPath:;
- (id)render;
- (void)setRender:;
+ (id)renderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
