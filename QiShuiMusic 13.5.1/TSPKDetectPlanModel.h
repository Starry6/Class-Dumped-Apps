@interface TSPKDetectPlanModel : NSObject
@property (nonatomic) NSString interestMethodType;
@property (nonatomic) NSString dataType;
@property (nonatomic) Q taskType;
@property (nonatomic) TSPKSceneRuleModel ruleModel;
- (id)planUid;
- (id)interestMethodType;
- (id)ruleModel;
- (void)setInterestMethodType:;
- (void)setRuleModel:;
- (void)setDataType:;
- (unsigned long long)taskType;
- (id)dataType;
- (unsigned long long)triggerType;
- (void).cxx_destruct;
- (void)setTaskType:;
@end
