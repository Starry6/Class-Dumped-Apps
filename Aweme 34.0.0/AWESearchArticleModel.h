@interface AWESearchArticleModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) NSNumber readCounts;
@property (nonatomic) NSString articleTitle;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString sourceURL;
@property (nonatomic) NSString groupID;
- (id)readCounts;
- (void)setReadCounts:;
- (void)setGroupID:;
- (id)groupID;
- (id)sourceURL;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setSourceURL:;
- (void)setImageURL:;
- (id)authorName;
- (void)setAuthorName:;
- (id)articleTitle;
- (void)setArticleTitle:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
