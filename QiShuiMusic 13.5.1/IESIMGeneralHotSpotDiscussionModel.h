@interface IESIMGeneralHotSpotDiscussionModel : IESIMBaseApiModel
@property (nonatomic) IESIMAwemeModel awemeInfo;
@property (nonatomic) NSArray commentList;
@property (nonatomic) q cardStyle;
@property (nonatomic) NSString sentenceId;
@property (nonatomic) NSString keyword;
- (void)setCommentList:;
- (id)awemeInfo;
- (id)commentList;
- (id)sentenceId;
- (void)setAwemeInfo:;
- (void)setSentenceId:;
- (void).cxx_destruct;
- (void)setKeyword:;
- (id)keyword;
- (long long)cardStyle;
- (void)setCardStyle:;
+ (id)awemeInfoJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
