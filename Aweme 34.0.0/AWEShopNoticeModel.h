@interface AWEShopNoticeModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString pigeonHint;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (void)setSchemaURL:;
- (id)schemaURL;
- (void)setContentH:;
- (id)pigeonHint;
- (void)setPigeonHint:;
- (double)contentW;
- (void)setContentW:;
- (double)contentH;
- (id)content;
- (void)setContent:;
- (id)imageURL;
- (void).cxx_destruct;
- (id)title;
- (void)setImageURL:;
- (void)setTitle:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
