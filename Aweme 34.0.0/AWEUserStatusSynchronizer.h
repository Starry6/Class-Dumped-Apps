@interface AWEUserStatusSynchronizer : NSObject
@property (nonatomic) NSMutableDictionary usersMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishApproveUserFollowRequest:error:;
- (void)didFinishTapTAIsFriendWithUser:isFriend:;
- (void)didFinishSetRemarkWithUser:;
- (void)didFinishRemoveFansWithUser:;
- (void)didSpecialFollowWithUser:error:;
- (void)didCancelSpecialFollowWithUser:error:;
- (id)usersMap;
- (void)p_syncUserID:operation:;
- (void)setUsersMap:;
- (id)init;
- (void)dealloc;
- (void)removeUser:;
- (void)clear;
- (void).cxx_destruct;
- (void)addUser:;
@end
