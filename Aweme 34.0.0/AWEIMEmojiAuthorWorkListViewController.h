@interface AWEIMEmojiAuthorWorkListViewController : UIViewController
@property (nonatomic) UITableView emojiTable;
@property (nonatomic) UIView bgContainerView;
@property (nonatomic) NSArray emojiPackages;
@property (nonatomic) AWEIMEmojiAuthorWorklistResponseInfo currentFetchResponse;
@property (nonatomic) NSString authorSecUid;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (id)trackParams;
- (void)setTrackParams:;
- (id)authorSecUid;
- (void)__setupNavigationBar;
- (void)setAuthorSecUid:;
- (id)bgContainerView;
- (void)setBgContainerView:;
- (void)emojiAuthorTableHeaderViewClickGotoHomePage:;
- (void)__setUPUIs;
- (void)__populateData;
- (void)__addEmojiTable;
- (void)__loadMoreEmojiPackages;
- (id)emojiTable;
- (void)__didClickBack;
- (void)setEmojiPackages:;
- (void)__reloadUI;
- (void)__resetEmptyBackgroundTipView;
- (void)__endRefreshing;
- (id)emojiPackages;
- (void)emojiStoreCell:didClickAddPackage:;
- (void)setEmojiTable:;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (double)tableView:heightForHeaderInSection:;
- (id)currentFetchResponse;
- (void)setCurrentFetchResponse:;
@end
