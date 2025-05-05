@interface IESECCommentShowResponse : IESECBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray comments;
@property (nonatomic) IESECCommentSurveyModelV2 surveyV2;
- (void)setSurveyV2:;
- (id)surveyV2;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)comments;
- (void)setComments:;
+ (id)commentsJSONTransformer;
+ (id)surveyV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
