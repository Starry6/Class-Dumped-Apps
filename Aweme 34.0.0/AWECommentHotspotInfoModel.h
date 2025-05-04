@interface AWECommentHotspotInfoModel : AWEBaseApiModel
@property (nonatomic) NSString sentence;
@property (nonatomic) NSNumber sentenceID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString datasourceJsonStr;
@property (nonatomic) BOOL isGray;
@property (nonatomic) AWEURLModel coverURLModel;
@property (nonatomic) NSString discussionPageSchema;
- (BOOL)isGray;
- (id)sentenceID;
- (id)discussionPageSchema;
- (id)datasourceJsonStr;
- (id)coverURLModel;
- (void)setSentenceID:;
- (void)setDatasourceJsonStr:;
- (void)setIsGray:;
- (void)setCoverURLModel:;
- (void)setDiscussionPageSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)sentence;
- (void)setSentence:;
+ (id)coverURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
