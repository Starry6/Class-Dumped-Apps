@interface AWEIMNoticeConfigModel : IESIMBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString title;
@property (nonatomic) q selectValue;
@property (nonatomic) NSArray optionList;
- (void)setSelectValue:;
- (id)optionList;
- (long long)selectValue;
- (void)setOptionList:;
- (id)key;
- (void)setTitle:;
- (void)setKey:;
- (id)title;
- (void).cxx_destruct;
+ (id)optionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
