@interface IESLiveSaaSUserAPI : HTSLiveApi
- (void)blockUser:withUnionID:finished:;
- (void)syncChangeFollow:toUser:inRoom:syncToHost:needAlert:completion:;
- (void)_fetchUserInfoWithPath:params:finished:;
- (void)changeFollow:toUser:inRoom:syncToHost:completion:;
- (void)changePushStatus:secToUser:completion:;
- (void)fetchBlockedStatusForTarget:withUserID:finished:;
- (void)fetchLoginedUserFinised:;
- (void)fetchOpenIdCompletion:;
- (void)fetchUserFollowSyncStautsCompletion:;
- (void)p_unFollowWithDescription:userOpenID:inRoom:syncToHost:completion:;
- (void)p_unFollowWithDescription:userOpenID:inRoom:syncToHost:completion:needCancelCompletion:;
- (void)unBlockUser:withUnionID:finished:;
- (void)updateBlockedStatusForUser:withUnionID:isBlock:finished:;
- (void)updateUserFollowSyncStauts:completion:;
@end
