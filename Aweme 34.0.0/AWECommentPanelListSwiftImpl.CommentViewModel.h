@interface AWECommentPanelListSwiftImpl.CommentViewModel : AWECommentSwiftImpl.AWECommentBaseListViewModel
- (void)didFinishBindPhone;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setDataFromNotiWithNoti:;
- (void)setSliceDataFromNotiWithNoti:;
- (void)setChunkDataFromNotiWithNoti:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
