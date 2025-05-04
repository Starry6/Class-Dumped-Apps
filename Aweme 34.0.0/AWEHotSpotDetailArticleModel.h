@interface AWEHotSpotDetailArticleModel : AWEBaseApiModel
@property (nonatomic) NSString articleID;
@property (nonatomic) NSString authorName;
@property (nonatomic) AWEURLModel authorAvatarModel;
@property (nonatomic) NSString articleText;
@property (nonatomic) NSArray imageList;
- (void)setImageList:;
- (id)authorAvatarModel;
- (void)setAuthorAvatarModel:;
- (id)articleText;
- (void)setArticleText:;
- (void)setArticleID:;
- (id)articleID;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
- (id)imageList;
+ (id)imageListJSONTransformer;
+ (id)authorAvatarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
