@interface AWEIMNoticeTabModelNew : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) q level;
@property (nonatomic) NSArray noticeTabs;
- (id)noticeTabs;
- (id)schemaUrl;
- (void)setNoticeTabs:;
- (void)setSchemaUrl:;
- (void)setLevel:;
- (void)setName:;
- (long long)level;
- (void).cxx_destruct;
- (id)name;
+ (id)noticeTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
