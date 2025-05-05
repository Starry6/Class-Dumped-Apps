@interface IESLiveRevenueInteractStateMachine : NSObject
@property (nonatomic) NSDictionary states;
@property (nonatomic) IESLiveRevenueInteractState currentState;
@property (nonatomic) IESLiveRevenueInteractState initialState;
@property (nonatomic) IESLiveRevenueInteractState finalState;
@property (nonatomic) q previousState;
@property (nonatomic) <IESLiveRevenueInteractStateMachineDelegate> delegate;
- (id)currentStateStr;
- (id)transformState:;
- (long long)currentStateValue;
- (id)initWithStates:initialState:finalState:;
- (BOOL)isBetweenState:toState:;
- (BOOL)isInState:;
- (void)monitorEventHandleFailed:;
- (void)setCurrentState:;
- (id)states;
- (id)currentState;
- (void)setDelegate:;
- (void)setInitialState:;
- (id)initialState;
- (void)setPreviousState:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setStates:;
- (long long)previousState;
- (id)finalState;
- (void)setFinalState:;
- (BOOL)fireEvent:;
@end
