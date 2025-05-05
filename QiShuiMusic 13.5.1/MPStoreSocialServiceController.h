@interface MPStoreSocialServiceController : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_handleTransientStateForPersonDidChangeNotification:;
- (void)followPerson:completion:;
- (void)unfollowPerson:completion:;
- (void)requestFollowPerson:completion:;
- (void)cancelFollowRequestOnPerson:completion:;
- (void)blockPerson:completion:;
- (void)unblockPerson:completion:;
- (void)removeFollower:completion:;
- (long long)transientFollowStateForPerson:;
- (void)acceptAllFollowRequestsWithCompletion:;
- (void)acceptFollowRequestFromPerson:completion:;
- (void)declineFollowRequestFromPerson:completion:;
- (long long)transientFollowPendingRequestStateForPerson:;
- (void)_performTransientFollowState:onPerson:completion:;
- (void)_performTransientFollowPendingRequestState:onPerson:completion:;
- (id)_transientStateForPerson:shouldCreate:;
- (void)_populateTransientStatesSnapshot:;
- (void)_notifyTransientStatesDidChangeWithSnapshot:;
- (void)_transientStatesDidChange;
- (void)_queue_transientStatesDidChange;
- (id)_newOperationForRemovingFollower:completion:;
+ (id)_internalErrorForHTTPResponseCode:;
@end
