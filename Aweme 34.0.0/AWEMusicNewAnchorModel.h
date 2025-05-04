@interface AWEMusicNewAnchorModel : AWEBaseDataModel
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString anchorId;
- (id)anchorId;
- (void)setAnchorId:;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
