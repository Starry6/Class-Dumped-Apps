@interface AWERelatedVideoSearchVideoResponseModel : AWEAwemeResponseModel
@property (nonatomic) NSArray data;
@property (nonatomic) NSArray models;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setModels:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)models;
+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
