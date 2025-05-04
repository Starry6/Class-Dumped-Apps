@interface AWEAwemeDetailCustomResponse : AWEAwemeDetailResponse
@property (nonatomic) NSArray awemeDetails;
@property (nonatomic) AWEBottomViewConfigModel bottomViewConfig;
- (id)awemeDetails;
- (id)bottomViewConfig;
- (void)setAwemeDetails:;
- (void)setBottomViewConfig:;
- (void).cxx_destruct;
+ (id)bottomViewConfigJSONTransformer;
+ (id)awemeDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
