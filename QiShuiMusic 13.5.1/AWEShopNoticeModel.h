@interface AWEShopNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESIMURLModel imageURL;
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
- (void)setImageURL:;
- (id)imageURL;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
