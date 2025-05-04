@interface AWECodeGenBaseNoticeTabModel : AWEBaseDataModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSArray noticeTabModelArray;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (id)noticeTabModelArray;
- (void)setNoticeTabModelArray:;
- (void)setLevel:;
- (int)level;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
