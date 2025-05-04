@interface AWELiveFeedbackOption : AWEBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString text;
@property (nonatomic) q subQuestionId;
@property (nonatomic) BOOL negative;
@property (nonatomic) NSString toastText;
- (id)toastText;
- (void)setToastText:;
- (long long)subQuestionId;
- (void)setSubQuestionId:;
- (void)setKey:;
- (void)setText:;
- (id)key;
- (id)text;
- (void).cxx_destruct;
- (void)setNegative:;
- (BOOL)negative;
+ (id)JSONKeyPathsByPropertyKey;
@end
