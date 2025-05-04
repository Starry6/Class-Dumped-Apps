@interface AWEDoubleColumnSearchMerchandiseUpdateQueryModel : AWEBaseApiModel
@property (nonatomic) NSArray renderInfo;
@property (nonatomic) NSDictionary businessInfo;
@property (nonatomic) NSDictionary styleInfo;
@property (nonatomic) NSDictionary rebackParams;
- (void)setBusinessInfo:;
- (id)businessInfo;
- (void)setRenderInfo:;
- (id)rebackParams;
- (void)setRebackParams:;
- (void).cxx_destruct;
- (id)renderInfo;
- (void)setStyleInfo:;
- (id)styleInfo;
+ (id)styleInfoJSONTransformer;
+ (id)renderInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)businessInfoJSONTransformer;
@end
