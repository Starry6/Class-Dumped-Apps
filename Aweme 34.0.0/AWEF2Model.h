@interface AWEF2Model : MTLModel
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schemaURLString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schemaURLString;
- (void)setSchemaURLString:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
