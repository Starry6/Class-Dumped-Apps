@interface AWEOneDayStoryWithCommentModel : AWEBaseApiModel
@property (nonatomic) AWEOneDayLifeStoryModel lifeStory;
@property (nonatomic) AWEOneDayCommentHasMoreModel commentHasMore;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) AWEOneDayStoryViewerModel viewerModel;
- (void)setRecommendReason:;
- (id)recommendReason;
- (id)commentHasMore;
- (id)lifeStory;
- (void)setLifeStory:;
- (void)setCommentHasMore:;
- (id)viewerModel;
- (void)setViewerModel:;
- (void).cxx_destruct;
+ (id)lifeStoryJSONTransformer;
+ (id)commentHasMoreJSONTransformer;
+ (id)viewUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
