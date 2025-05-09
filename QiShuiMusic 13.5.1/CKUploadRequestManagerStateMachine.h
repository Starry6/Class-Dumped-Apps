@interface CKUploadRequestManagerStateMachine : NSObject
@property (nonatomic) CUStateMachine stateMachine;
@property (nonatomic) CUStateEvent eventCausingTransition;
@property (nonatomic) @? internalActionHandler;
@property (nonatomic) @? actionHandler;
@property (nonatomic) @? enterStateHandler;
@property (nonatomic) @? exitStateHandler;
- (void)dealloc;
- (void)start;
- (void)transitionToState:withEvent:;
- (id)eventHandlerForState:withEnterBlock:exitBlock:eventBlock:;
- (id)exitStateHandler;
- (id)createStateMachine;
- (void)setExitStateHandler:;
- (void)setInternalActionHandler:;
- (id)stateMachine;
- (id)internalActionHandler;
- (void)setActionHandler:;
- (void)setStateMachine:;
- (void)dispatchEvent:userInfo:;
- (id)actionHandler;
- (id)initWithActionHandler:;
- (void).cxx_destruct;
- (void)setEventCausingTransition:;
- (id)enterStateHandler;
- (void)setEnterStateHandler:;
- (BOOL)canPerformFunction:;
- (id)eventCausingTransition;
- (void)dispatchEvent:;
+ (id)nameFromResponseAction:;
+ (id)nameFromFunction:;
+ (id)nameFromStateEvent:;
+ (id)nameFromState:;
@end
