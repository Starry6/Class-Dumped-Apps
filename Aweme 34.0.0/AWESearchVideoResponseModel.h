@interface AWESearchVideoResponseModel : AWEAwemeResponseModel
@property (nonatomic) NSArray models;
@property (nonatomic) NSArray data;
- (id)awemeList;
- (void)setModels:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)models;
+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
