@interface TSPKRuleEngineSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)addExtraInfoForParams:;
- (void)appendExecuteResult:toEventData:input:;
- (id)buildDefaultFilterParameter:;
- (id)convertEventDataToParams:source:;
- (id)hanleEvent:;
- (void)reportInfoWithParams:ruleSetNames:ruleResult:usedParameters:needFuse:backtraces:eventData:;
- (id)uniqueId;
@end
