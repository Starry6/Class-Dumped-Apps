@interface AWESearchFeelGoodSurveyFormItemsModel : AWEBaseApiModel
@property (nonatomic) NSArray options;
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleID;
- (id)titleID;
- (void)setTitleID:;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
