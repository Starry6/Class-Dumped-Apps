@interface AWESearchVideoExperienceTrackStateMachine : NSObject
@property (nonatomic) Q curState;
@property (nonatomic) <AWESearchVideoExperienceTrackStateMachineDelegate> delegate;
- (unsigned long long)playSuccessStateForWaitingPlay;
- (BOOL)transitionToNewState:;
- (BOOL)isVirtualFinalState;
- (BOOL)isFinalState;
- (void)resetState:;
- (BOOL)transitionToNewState:extraParams:;
- (BOOL)waitingPlay;
- (unsigned long long)curState;
- (unsigned long long)PlaySuccessStateForLivePlay;
- (unsigned long long)PlayFailedStateForLivePlay;
- (unsigned long long)PlayCancelStateForLivePlay;
- (unsigned long long)playFailedStateForWaitingPlay;
- (unsigned long long)playCancelStateForWaitingPlay;
- (void)setCurState:;
- (BOOL)canTransitionToNewState:;
- (id)delegate;
- (id)initWithState:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (unsigned long long)finalState;
@end
