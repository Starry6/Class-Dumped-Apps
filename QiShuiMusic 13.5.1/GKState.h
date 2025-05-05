@interface GKState : NSObject
@property (nonatomic) GKStateMachine stateMachine;
- (id)init;
- (id)stateMachine;
- (void).cxx_destruct;
- (void)didEnterWithPreviousState:;
- (void)willExitWithNextState:;
- (void)updateWithDeltaTime:;
- (BOOL)isValidNextState:;
- (void)_setStateMachine:;
+ (id)state;
@end
