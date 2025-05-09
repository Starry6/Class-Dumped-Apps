@interface AWEPrivatePostsViewModel : NSObject
@property (nonatomic) AWEPrivatePostsDataController privateDataController;
@property (nonatomic) <AWECloudAlbumPrivatePostViewModel> cloudAlbumDataController;
@property (nonatomic) <AWEInTodayPrivatePostViewModelProtocol> memoriesDataController;
@property (nonatomic) <AWERecycledWorksPrivatePostViewModelProtocol> recycledWorksViewModel;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) NSArray cloudAlbumList;
@property (nonatomic) NSArray privatePostList;
@property (nonatomic) NSArray memoriesList;
@property (nonatomic) NSArray recycledWorksList;
@property (nonatomic) q recycledWorksTotalCount;
@property (nonatomic) <AWECloudAlbumChangeProtocol> cloudAlbumDelegate;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)willDisplayCell:;
- (BOOL)removeAwemeWithItemID:;
- (void)setCurrentUserID:;
- (BOOL)addAwemeWithItemID:;
- (void)insertAwemeModel:atIndex:;
- (id)recycledWorksList;
- (long long)recycledWorksTotalCount;
- (id)cloudAlbumList;
- (id)memoriesList;
- (id)privatePostDataController;
- (BOOL)cloudAlbumHasMore;
- (void)softDeleteAweme:;
- (void)changeVideFavoritedStatus:itemID:;
- (void)removeRecycledWorksCellIfNeeded;
- (id)removeLocalAlbum;
- (void)cloudAlbumUpdate;
- (void)updataMemoriesData:;
- (long long)memoriesListDelete;
- (long long)memoriesCellIndex;
- (id)privatePostList;
- (void)setCloudAlbumDelegate:;
- (void)cloudAlbumUploadAssetWithCompletion:;
- (void)cloudAlbumDelete:;
- (id)cloudAlbumDataController;
- (id)recycledWorksViewModel;
- (id)memoriesDataController;
- (void)p_combineAlbumsWithPostsDataSource;
- (BOOL)p_isPrivatePostListShow;
- (long long)indexOfTargetData:;
- (id)cloudAlbumDelegate;
- (BOOL)hasCloudAlbumExcludeLocalAlbum;
- (BOOL)hasCloudAlbumVisible:;
- (BOOL)memoriesCellNeedRefresh;
- (void)setCloudAlbumDataController:;
- (void)setMemoriesDataController:;
- (void)setRecycledWorksViewModel:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setDataSource:;
- (id)dataSource;
- (void)viewWillDisappear;
- (id)privateDataController;
- (void)setPrivateDataController:;
- (id)currentUserID;
@end
