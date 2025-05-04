@interface AWEIMNoticeConfigModel : IESIMBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString title;
@property (nonatomic) q selectValue;
@property (nonatomic) NSArray optionList;
- (long long)selectValue;
- (void)setSelectValue:;
- (id)optionList;
- (void)setOptionList:;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)optionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
