@interface FigStateMachine : NSObject
@property (nonatomic) BOOL performsAtomicStateTransitions;
@property (nonatomic) I currentState;
@property (nonatomic) NSString label;
@property (nonatomic) NSString currentStateLabel;
- (BOOL)transitionToState:;
- (void)dealloc;
- (unsigned int)currentState;
- (id)currentStateLabel;
- (BOOL)transitionToState:fromStates:;
- (id)label;
- (BOOL)transitionToState:errorStatus:;
- (void)setPerformsAtomicStateTransitions:;
- (void)whenTransitioningToState:callHandler:;
- (BOOL)transitionToState:fromState:;
- (void)whenTransitioningToStates:callHandler:;
- (BOOL)performsAtomicStateTransitions;
- (void)whenTransitioningToStateFails:callHandler:;
- (id)description;
- (void)markStateAsTerminal:;
- (id)labelForState:;
- (id)initWithLabel:stateCount:initialState:owner:;
- (void)setLabel:forState:;
- (void)whenTransitioningFromState:toState:callHandler:;
- (void)whenTransitioningToStatesFail:callHandler:;
+ (int)indexForState:;
@end
