@interface AWENewHotSpotExtendDiscussionItem : AWEBaseApiModel
@property (nonatomic) NSString sentence;
@property (nonatomic) NSNumber sentenceID;
@property (nonatomic) NSString wordCoverUrl;
@property (nonatomic) BOOL isGray;
@property (nonatomic) NSNumber discussingPV;
@property (nonatomic) NSArray commentList;
@property (nonatomic) NSString dataSource;
- (BOOL)isGray;
- (id)sentenceID;
- (id)commentList;
- (void)setCommentList:;
- (void)setSentenceID:;
- (void)setIsGray:;
- (id)discussingPV;
- (void)setDiscussingPV:;
- (id)wordCoverUrl;
- (void)setWordCoverUrl:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (id)sentence;
- (void)setSentence:;
+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
