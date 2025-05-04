@interface AWEIMNoticeTabModelNew : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) q level;
@property (nonatomic) NSArray noticeTabs;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (id)noticeTabs;
- (void)setNoticeTabs:;
- (void)setLevel:;
- (long long)level;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)noticeTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
