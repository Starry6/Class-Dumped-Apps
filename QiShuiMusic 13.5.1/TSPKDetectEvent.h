@interface TSPKDetectEvent : TSPKBaseEvent
@property (nonatomic) TSPKDetectCondition condition;
@property (nonatomic) TSPKEventData eventData;
@property (nonatomic) TSPKDetectPlanModel detectPlanModel;
- (id)detectPlanModel;
- (void)setDetectPlanModel:;
- (id)condition;
- (id)tag;
- (void)setCondition:;
- (unsigned long long)taskType;
- (void).cxx_destruct;
- (id)eventData;
- (void)setEventData:;
@end
