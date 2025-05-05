@interface IESLiveRevenueInteractPlayStateManager : NSObject
@property (nonatomic) IESLiveRevenueInteractStateMachine stateMachine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentStateStr;
- (id)extraWithCommonParams:;
- (id)initWithDIContext:;
- (id)initializeFinishState;
- (id)initializeNoneState;
- (id)initializePlayingState;
- (id)initializeResultState;
- (BOOL)isInState:;
- (void)logErrorWithEvent:extra:;
- (void)logInfoWithEvent:extra:;
- (void)monitorWithBusinessName:extra:;
- (void)setupStateMachine;
- (unsigned long long)currentState;
- (id)stateMachine;
- (void)setStateMachine:;
- (void).cxx_destruct;
- (unsigned long long)previousState;
- (BOOL)fireEvent:;
@end
