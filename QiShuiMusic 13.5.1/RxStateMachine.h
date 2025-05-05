@interface RxStateMachine : NSObject
@property (nonatomic) Q state;
- (void)_iterateTransitionTable:;
- (unsigned long long)_totoalStateCount;
- (id)transitionDescriptions;
- (void)handleEvent:withContext:;
- (void)dealloc;
- (void)setState:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)initWithStates:events:initialState:;
- (void)setTransitionHandlerForState:withEvent:transitionHandler:;
- (void)setTransitionHandlerForState:withEvent:transitionHandler:postTransitionHandler:;
- (void)setStaticTransitionFromState:withEvent:toState:;
- (void)setStateChangeObserver:observer:;
+ (void)debugAttemptedInvalidStateTransitionFromState:withEvent:;
+ (void)debugStateTransitionFromState:withEvent:toState:;
@end
