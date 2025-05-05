@interface GKStateMachine : NSObject
@property (nonatomic) GKState currentState;
- (id)init;
- (id)currentState;
- (BOOL)enterState:;
- (void).cxx_destruct;
- (void)updateWithDeltaTime:;
- (id)stateForClass:;
- (id)initWithStates:;
- (void)forceEnterState:;
- (BOOL)canEnterState:;
- (id)_instanceData;
- (id)_dotStringInstanceData;
+ (id)stateMachineWithStates:;
@end
