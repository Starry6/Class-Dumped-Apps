@interface IESIMOneDayStoryWithCommentModel : IESIMBaseApiModel
@property (nonatomic) IESIMOneDayLifeStoryModel lifeStory;
@property (nonatomic) IESIMOneDayCommentHasMoreModel commentHasMore;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) IESIMOneDayStoryViewerModel viewerModel;
- (id)recommendReason;
- (void)setViewerModel:;
- (id)commentHasMore;
- (id)lifeStory;
- (void)setCommentHasMore:;
- (void)setLifeStory:;
- (void)setRecommendReason:;
- (id)viewerModel;
- (void).cxx_destruct;
+ (id)commentHasMoreJSONTransformer;
+ (id)lifeStoryJSONTransformer;
+ (id)viewUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
