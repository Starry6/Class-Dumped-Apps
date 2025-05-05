@interface IESIMF2Model : MTLModel
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schemaURLString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schemaURLString;
- (void)setSchemaURLString:;
- (void)setIconURL:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)iconURL;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
