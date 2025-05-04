@interface AWEGeneralHotSpotDiscussionModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) NSArray commentList;
@property (nonatomic) q cardStyle;
@property (nonatomic) NSString sentenceId;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString title;
- (id)awemeInfo;
- (void)setAwemeInfo:;
- (id)sentenceId;
- (void)setSentenceId:;
- (id)commentList;
- (void)setCommentList:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)keyword;
- (void)setKeyword:;
- (long long)cardStyle;
- (void)setCardStyle:;
+ (id)commentListJSONTransformer;
+ (id)awemeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
