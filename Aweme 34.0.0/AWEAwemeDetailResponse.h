@interface AWEAwemeDetailResponse : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeDetail;
@property (nonatomic) AWEFilterDetail filterDetail;
- (id)awemeDetail;
- (id)filterDetail;
- (void)setFilterDetail:;
- (void)setAwemeDetail:;
- (void).cxx_destruct;
+ (id)filterDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
