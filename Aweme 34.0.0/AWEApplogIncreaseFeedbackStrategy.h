@interface AWEApplogIncreaseFeedbackStrategy : AWEApplogIncreaseAbstractStrategy
@property (nonatomic) NSArray negativeFbApplogList;
@property (nonatomic) BOOL isNegativeFbTriggered;
@property (nonatomic) NSString triggerApplogEvent;
@property (nonatomic) NSString negativeApplogEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playWith:;
- (void)onApplogEvent:params:;
- (BOOL)shouldExecuteStrategy;
- (void)setIsNegativeFbTriggered:;
- (void)setTriggerApplogEvent:;
- (void)setNegativeApplogEvent:;
- (void)setNegativeFbApplogList:;
- (id)negativeApplogEvent;
- (id)triggerApplogEvent;
- (id)negativeFbApplogList;
- (BOOL)isNegativeFbTriggered;
- (id)init;
- (void)execute;
- (void).cxx_destruct;
@end
