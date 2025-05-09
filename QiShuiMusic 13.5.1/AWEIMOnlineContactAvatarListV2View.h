@interface AWEIMOnlineContactAvatarListV2View : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIMOnlineContactRequestAvatarListV2DataController listDataController;
@property (nonatomic) AWEIMOnlineContactAvatarListTracker tracker;
@property (nonatomic) NSString sectionID;
@property (nonatomic) RxCollectionViewDiffableDataSource dataSource;
@property (nonatomic) @? refreshBlock;
@property (nonatomic) AWEIMSkylightLocalResort localResort;
@property (nonatomic) Q placeholderCount;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) <AWEIMOnlineContactAvatarListViewDelegate> delegate;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogout;
- (BOOL)hasOnlineFriend;
- (void)setLocalResort:;
- (BOOL)canPerformLocalResort:;
- (void)checkShouldHidden;
- (id)createDataSourceWithCollectionView:;
- (id)dataListForLocalResort:;
- (void)didFinishLogin;
- (id)listDataController;
- (id)localResort;
- (void)localResort:needResort:dataList:;
- (BOOL)needUpdate;
- (void)p_setupCommon;
- (void)p_setupUI;
- (void)performShouldHiddenDelegate;
- (void)refreshWithIgnoreFrequency:;
- (void)rtvChatRoomInvitedDidChange;
- (void)setListDataController:;
- (void)setNeedUpdate:;
- (void)setPlaceholderCount:;
- (void)setTracker:;
- (void)setDataSource:;
- (void)resetData;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)dealloc;
- (id)tracker;
- (void)setSectionID:;
- (void)setDelegate:;
- (unsigned long long)placeholderCount;
- (id)sectionID;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)scrollViewWillBeginDragging:;
- (void)setCollectionView:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)collectionView;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
- (void)refreshIfNeeded;
- (void)resetContentOffset:;
- (void)updateWithUser:;
- (void)setRefreshBlock:;
- (id)refreshBlock;
@end
