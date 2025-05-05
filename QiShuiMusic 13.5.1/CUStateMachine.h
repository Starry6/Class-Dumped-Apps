@interface CUStateMachine : NSObject
@property (nonatomic) CUState initialState;
@property (nonatomic) NSArray states;
- (void)transitionToState:;
- (id)states;
- (void)dealloc;
- (void)start;
- (void)setInitialState:;
- (id)initialState;
- (void).cxx_destruct;
- (void)setStates:;
- (void)_firstTimeInit;
- (void)invalidate;
- (void)dispatchEvent:;
@end
