@interface AWEHotSpotFeedNewDetailResponseModel : AWEBaseApiModel
@property (nonatomic) NSString hotSpotDescription;
@property (nonatomic) AWEEventNodeListResponseModel eventListResponseModel;
@property (nonatomic) NSArray relatedUserInfoArray;
@property (nonatomic) NSArray commentsArray;
@property (nonatomic) NSArray articleArray;
@property (nonatomic) NSString topicID;
@property (nonatomic) NSString articleID;
- (id)hotSpotDescription;
- (id)commentsArray;
- (void)setCommentsArray:;
- (id)eventListResponseModel;
- (id)relatedUserInfoArray;
- (id)articleArray;
- (void)setHotSpotDescription:;
- (void)setEventListResponseModel:;
- (void)setRelatedUserInfoArray:;
- (void)setArticleArray:;
- (void)setTopicID:;
- (id)topicID;
- (void)setArticleID:;
- (id)articleID;
- (void).cxx_destruct;
- (BOOL)isModelEmpty;
+ (id)relatedUserInfoArrayJSONTransformer;
+ (id)commentsArrayJSONTransformer;
+ (id)articleArrayJSONTransformer;
+ (id)eventListResponseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
