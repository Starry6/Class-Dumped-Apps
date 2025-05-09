@interface AWELiveVisibleScopeListViewController : UIViewController
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSArray tabArray;
@property (nonatomic) AWEVisibleScopeManager manager;
@property (nonatomic) NSString keyword;
@property (nonatomic) Q curVisibleType;
@property (nonatomic) Q originVisibleType;
@property (nonatomic) Q selectedTabType;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel limitTipLabel;
@property (nonatomic) AWELiveVisibleScopeSearchView searchView;
@property (nonatomic) AWELiveVisibleScopeSearchViewController searchVC;
@property (nonatomic) UICollectionView tabCollectionView;
@property (nonatomic) UIButton completeButton;
@property (nonatomic) UIView listView;
@property (nonatomic) AWELiveVisibleScopeTabListViewController allListVC;
@property (nonatomic) AWELiveVisibleScopeTabListViewController chatGroupVC;
@property (nonatomic) AWELiveVisibleScopeTabListViewController friendsVC;
@property (nonatomic) AWELiveVisibleScopeTabListViewController fansVC;
@property (nonatomic) AWELiveVisibleScopeTabListViewController followingVC;
@property (nonatomic) @? selectUserListBlock;
@property (nonatomic) @? selectUserListCallback;
@property (nonatomic) @? cancelUserListBlock;
@property (nonatomic) BOOL isPlayBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transImage:;
- (void)setAwemeID:;
- (id)awemeID;
- (id)completeButton;
- (void)setCompleteButton:;
- (id)tabArray;
- (void)setTabArray:;
- (id)followingVC;
- (id)fansVC;
- (void)setFollowingVC:;
- (void)setFansVC:;
- (void)p_search:;
- (void)p_resetSearchVC;
- (id)searchVC;
- (void)setSearchVC:;
- (void)selectedListChanged;
- (void)clearSearchView;
- (void)removeSelectObject:;
- (id)initWithType:AwemeID:trackContext:originUserList:;
- (void)setSelectUserListBlock:;
- (void)setSelectUserListCallback:;
- (id)userIdStringArray:;
- (void)setIsPlayBack:;
- (void)setCurVisibleType:;
- (void)setOriginVisibleType:;
- (unsigned long long)curVisibleType;
- (void)setSelectedTabType:;
- (id)limitTipLabel;
- (unsigned long long)originVisibleType;
- (unsigned long long)selectedTabType;
- (id)currentTabListVC:;
- (void)p_selectUser:needCheckStranger:;
- (id)liveUserFromAwemUser:;
- (id)cancelUserListBlock;
- (id)selectUserListCallback;
- (void)addUploadVisibleSelectMonitor:requestCode:requestHintMsg:type:userList:updateFailedList:cancelFailedList:;
- (id)selectUserListBlock;
- (void)completeButtonTapped:;
- (void)p_selectAwemeUser:needCheckStranger:;
- (id)allListVC;
- (id)friendsVC;
- (id)chatGroupVC;
- (void)removeChatGroup:;
- (void)setCancelUserListBlock:;
- (BOOL)isPlayBack;
- (void)setLimitTipLabel:;
- (void)setTabCollectionView:;
- (void)setAllListVC:;
- (void)setChatGroupVC:;
- (void)setFriendsVC:;
- (id)backButton;
- (void)viewWillDisappear:;
- (void)setManager:;
- (BOOL)textFieldShouldClear:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setBackButton:;
- (id)listView;
- (id)manager;
- (void)setListView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)tabCollectionView;
- (void)setTitleLabel:;
- (BOOL)textFieldShouldReturn:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)titleLabel;
- (void)setupUI;
- (void)textFieldDidChange:;
- (id)keyword;
- (void)setKeyword:;
- (void)dismissSelf;
- (id)searchView;
- (void)setSearchView:;
@end
