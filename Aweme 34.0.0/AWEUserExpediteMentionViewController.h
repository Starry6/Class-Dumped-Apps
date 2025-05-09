@interface AWEUserExpediteMentionViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSObject<AFDMentionUserPickerContactDatasourceProtocol> dataSource;
@property (nonatomic) NSArray localUserArray;
@property (nonatomic) NSArray searchList;
@property (nonatomic) NSArray remoteSearchList;
@property (nonatomic) NSString keyword;
@property (nonatomic) {_NSRange=QQ} searchingMentionRange;
@property (nonatomic) BOOL isFromLoadMore;
@property (nonatomic) NSMutableArray trackUserList;
@property (nonatomic) BOOL needTrackUserList;
@property (nonatomic) NSMutableSet videoAtListShowTrackedUser;
@property (nonatomic) NSMutableArray sugTrackedUser;
@property (nonatomic) NSString sugSessionID;
@property (nonatomic) <AWEUserExpediteMentionViewControllerDelegate> delegate;
@property (nonatomic) @? selectCompletion;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString source;
@property (nonatomic) AWEUserPickerConfig config;
@property (nonatomic) BOOL loadMoreAtTracking;
@property (nonatomic) NSDictionary commomTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)setRefer:;
- (id)refer;
- (void)p_searchUserListTrack;
- (void)p_updateSugSessionID;
- (id)trackUserList;
- (id)sugTrackedUser;
- (id)sugSessionID;
- (void)setSugSessionID:;
- (void)p_startSearchWithKeyword:;
- (void)setTrackUserList:;
- (void)setSugTrackedUser:;
- (BOOL)p_isSearchMode;
- (id)commomTrackParams;
- (id)localUserArray;
- (void)p_tryAddUser:toArrM:filterSetM:;
- (void)setLocalUserArray:;
- (void)setCommomTrackParams:;
- (void)setLoadMoreAtTracking:;
- (void)searchKeyword:searchingMentionRange:;
- (void)p_initializeContactList;
- (void)p_prepareData;
- (void)p_refreshLoadMoreFooter;
- (id)selectCompletion;
- (void)setSelectCompletion:;
- (BOOL)loadMoreAtTracking;
- (void)setIsFromLoadMore:;
- (void)setRemoteSearchList:;
- (void)p_reloadList:error:isSearchMode:;
- (void)setSearchingMentionRange:;
- (void)hideMentionListView;
- (void)p_search;
- (void)showMentionListView;
- (void)setNeedTrackUserList:;
- (id)remoteSearchList;
- (id)videoAtListShowTrackedUser;
- (id)searchingMentionRange;
- (BOOL)isFromLoadMore;
- (BOOL)needTrackUserList;
- (void)p_trackSugTrendingShowWithWordsNum:;
- (void)setVideoAtListShowTrackedUser:;
- (void)setConfig:;
- (id)itemID;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setItemID:;
- (long long)tableView:numberOfRowsInSection:;
- (id)delegate;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)config;
- (void)viewDidLoad;
- (id)tableView;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)source;
- (void)setSource:;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)searchList;
- (void)setSearchList:;
- (id)keyword;
- (void)setKeyword:;
@end
