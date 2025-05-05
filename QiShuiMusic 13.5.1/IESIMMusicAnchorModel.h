@interface IESIMMusicAnchorModel : IESIMBaseApiModel
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString anchorId;
- (id)anchorId;
- (id)schemaUrl;
- (void)setAnchorId:;
- (void)setSchemaUrl:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
