@interface AWESearchLiveRecommendModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString rid;
@property (nonatomic) AWEAwemeRecommondModel data;
- (long long)type;
- (void)setType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setRid:;
- (id)rid;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
