@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject
- (id)init;
- (void).cxx_destruct;
- (long long)transientFollowStateForPerson:;
- (long long)transientFollowPendingRequestStateForPerson:;
- (void)_addTransientFollowState:transientFollowPendingRequestState:forPerson:;
@end
