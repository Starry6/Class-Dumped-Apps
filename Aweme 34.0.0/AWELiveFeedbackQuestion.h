@interface AWELiveFeedbackQuestion : AWEBaseApiModel
@property (nonatomic) NSString questionKey;
@property (nonatomic) NSString questionText;
@property (nonatomic) q type;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) q questionId;
- (long long)questionId;
- (id)questionKey;
- (void)setQuestionId:;
- (void)setQuestionKey:;
- (void)setOptionsArray:;
- (id)optionsArray;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)questionText;
- (void)setQuestionText:;
+ (id)optionsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
