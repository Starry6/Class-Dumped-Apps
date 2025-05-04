@interface AWEStoryImpl.StoryRelationPlugin : NSObject
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishCloseFriendsWithUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)didChangePrivateRelationWithUser:relationType:relationValue:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
