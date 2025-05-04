@interface AWEStoryImpl.StoryTabRelationPlugin : NSObject
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishApproveUserFollowRequest:error:;
- (void)didFinishRemoveFansWithUser:;
- (void)p_handleMateDislikeWithNotification:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
