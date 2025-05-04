@interface AWEQuestionnaireResponse : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString interactionRule;
@property (nonatomic) double deadlineTime;
@property (nonatomic) Q type;
@property (nonatomic) NSString taskID;
@property (nonatomic) AWEQuestionnaire questionnaire;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)questionnaire;
- (void)setQuestionnaire:;
- (id)interactionRule;
- (double)deadlineTime;
- (void)setInteractionRule:;
- (void)setDeadlineTime:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
+ (id)questionnaireJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
