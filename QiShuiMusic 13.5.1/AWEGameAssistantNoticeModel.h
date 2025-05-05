@interface AWEGameAssistantNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
- (id)schemaURL;
- (void)setSchemaURL:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
