@interface AWELiveFeedbackCard : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) q feedbackId;
@property (nonatomic) NSInteger feedbackType;
@property (nonatomic) NSInteger inflowFeedbackType;
@property (nonatomic) NSMutableArray questionArray;
@property (nonatomic) AWELiveFeedbackCondition condition;
@property (nonatomic) NSString negativeText;
- (id)negativeText;
- (void)setNegativeText:;
- (id)questionArray;
- (int)inflowFeedbackType;
- (void)setInflowFeedbackType:;
- (void)setQuestionArray:;
- (int)feedbackType;
- (id)condition;
- (void)setCondition:;
- (void)setFeedbackType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)feedbackId;
- (void)setFeedbackId:;
+ (id)parseFromOriginRoomModel:;
+ (id)questionArrayJSONTransformer;
+ (id)conditionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
