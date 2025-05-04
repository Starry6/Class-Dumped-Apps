@interface AWEIMFansPostWorkListViewModel : AWEIMFansBaseViewModel
@property (nonatomic) NSArray fetchedFansDataSourceUserIDs;
- (void)fetchUserPostListWithNoticeList:isRefresh:;
- (void)setFetchedFansDataSourceUserIDs:;
- (id)fetchedFansDataSourceUserIDs;
- (void)p_handleUserPostList:error:;
- (void).cxx_destruct;
@end
