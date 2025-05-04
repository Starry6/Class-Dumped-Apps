@interface AWEQuestionnaireModel : MTLModel
@property (nonatomic) NSString questionnaireID;
@property (nonatomic) NSNumber answerType;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL shouldUseRandomOption;
@property (nonatomic) NSArray options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldUseRandomOption;
- (id)questionnaireID;
- (void)setQuestionnaireID:;
- (void)setShouldUseRandomOption:;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)answerType;
- (void)setAnswerType:;
+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
