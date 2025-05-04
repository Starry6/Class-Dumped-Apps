@interface AWECodeGenBaseNoticeConfigModel : AWEBaseDataModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger selectValue;
@property (nonatomic) NSArray optionArray;
- (int)selectValue;
- (void)setSelectValue:;
- (void)setOptionArray:;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)optionArray;
+ (id)JSONKeyPathsByPropertyKey;
@end
