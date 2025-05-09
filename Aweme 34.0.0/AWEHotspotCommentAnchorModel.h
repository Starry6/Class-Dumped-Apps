@interface AWEHotspotCommentAnchorModel : AWEBaseApiModel
@property (nonatomic) NSNumber sentenceID;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString sentence;
@property (nonatomic) NSString hint;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString dataSource;
- (void)setExtra:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)sentenceID;
- (void)setSentenceID:;
- (id)schema;
- (void)setIconURL:;
- (void)setSchema:;
- (id)iconURL;
- (void)setText:;
- (id)extra;
- (id)text;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (id)hint;
- (void)setHint:;
- (id)sentence;
- (void)setSentence:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
