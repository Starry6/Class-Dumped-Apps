@interface AWEAdNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString contentSchemaURL;
@property (nonatomic) NSString webURL;
@property (nonatomic) IESIMURLModel imageURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (double)contentH;
- (id)contentSchemaURL;
- (double)contentW;
- (id)schemaURL;
- (void)setContentH:;
- (void)setContentSchemaURL:;
- (void)setContentW:;
- (void)setSchemaURL:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)webURL;
- (void)setImageURL:;
- (id)imageURL;
- (void)setWebURL:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
