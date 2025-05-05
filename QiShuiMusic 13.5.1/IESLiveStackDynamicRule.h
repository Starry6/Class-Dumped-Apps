@interface IESLiveStackDynamicRule : NSObject
@property (nonatomic) IESLiveLayoutBaseContainer parentContainer;
@property (nonatomic) Q activityType;
@property (nonatomic) IESLiveStackManager stackManager;
- (void)executeAtState:managedStack:;
- (void)setStackManager:;
- (id)stackManager;
- (unsigned long long)activityType;
- (void)setActivityType:;
- (void).cxx_destruct;
- (id)parentContainer;
- (void)setParentContainer:;
@end
