@interface AWEGeneralSearchVideoDeepQAModel : AWEBaseApiModel
@property (nonatomic) NSString deepQAType;
@property (nonatomic) AWEGeneralSearchVideoDeepQAUIConfigModel UIConfigModel;
@property (nonatomic) AWEGeneralSearchVideoDeepQATitleModel titleModel;
@property (nonatomic) NSString shortAnswer;
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) NSArray commentList;
- (id)awemeInfo;
- (id)titleModel;
- (void)setAwemeInfo:;
- (id)commentList;
- (void)setCommentList:;
- (void)setTitleModel:;
- (id)UIConfigModel;
- (void)setDeepQAType:;
- (void)setUIConfigModel:;
- (void)setShortAnswer:;
- (id)shortAnswer;
- (id)deepQAType;
- (void).cxx_destruct;
+ (id)commentListJSONTransformer;
+ (id)awemeInfoJSONTransformer;
+ (id)UIConfigModelJSONTransformer;
+ (id)titleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
