@interface AWEStarAtlasNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (double)contentH;
- (double)contentW;
- (id)schemaURL;
- (void)setContentH:;
- (void)setContentW:;
- (void)setSchemaURL:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
