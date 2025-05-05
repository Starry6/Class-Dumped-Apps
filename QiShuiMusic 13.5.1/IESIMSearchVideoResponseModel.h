@interface IESIMSearchVideoResponseModel : IESIMAwemeResponseModel
@property (nonatomic) NSArray models;
@property (nonatomic) NSArray data;
- (id)awemeList;
- (void)setModels:;
- (id)data;
- (id)models;
- (void).cxx_destruct;
- (void)setData:;
+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
