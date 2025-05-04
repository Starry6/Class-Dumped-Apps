@interface AWECommentPanelListSwiftImpl.CommentManagerContainerViewModel : AWECommentSwiftImpl.AWECommentBaseListViewModel
- (void)didFinishBindPhone;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)fetchListData;
- (void)loadMoreListData;
- (id)init;
- (void).cxx_destruct;
@end
