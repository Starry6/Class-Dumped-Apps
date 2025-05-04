@interface AWEShareSchemaVideoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString awemeID;
- (void)setAwemeID:;
- (id)awemeID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)authorName;
- (void)setAuthorName:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
