@interface AWEIMFansUserMessageViewModel : AWEIMFansBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishApproveUserFollowRequest:error:;
- (void)didFinishRejectUserFollowRequestWithNoticeID:user:;
- (void)didFinishSetRemarkWithUser:;
- (void)didFinishRemoveFansWithUser:;
- (void)p_showPostWorkListAtIndex:model:;
- (void)refreshRowAtIndex:;
- (id)init;
- (void)dealloc;
- (void)addObservers;
@end
