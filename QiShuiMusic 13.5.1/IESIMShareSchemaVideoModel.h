@interface IESIMShareSchemaVideoModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString awemeID;
- (id)awemeID;
- (void)setAwemeID:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
