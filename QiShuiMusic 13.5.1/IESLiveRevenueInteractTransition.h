@interface IESLiveRevenueInteractTransition : NSObject
@property (nonatomic) q event;
@property (nonatomic) q targetState;
@property (nonatomic) @? condition;
- (id)condition;
- (void)setEvent:;
- (void)setCondition:;
- (long long)event;
- (void).cxx_destruct;
- (long long)targetState;
- (void)setTargetState:;
@end
