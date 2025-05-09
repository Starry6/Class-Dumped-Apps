@interface AWEUserContactListViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEContactListTableViewHeader tableViewHeader;
@property (nonatomic) UIView<AWEIMUserListHideTipFooterProtocol> tipFooterView;
@property (nonatomic) NSObject<AFDMentionUserPickerContactDatasourceProtocol> dataSource;
@property (nonatomic) NSArray sectionData;
@property (nonatomic) NSArray sectionTitles;
@property (nonatomic) NSArray sectionIndexTitles;
@property (nonatomic) NSMutableArray customSectionTypeList;
@property (nonatomic) BOOL isUseSystemIndexView;
@property (nonatomic) @? selectCompletion;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString source;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)aweui_emptyPageConfigForState:;
- (id)aweui_emptyPageEdgeInsets;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)setRefer:;
- (id)refer;
- (void)setSectionData:;
- (BOOL)p_isSearchMode;
- (id)tableViewHeader;
- (void)setTableViewHeader:;
- (id)p_userAtIndexPath:;
- (BOOL)needUseSystemIndexView;
- (void)setIsUseSystemIndexView:;
- (void)p_initializeContactList;
- (void)p_prepareData;
- (void)p_refreshIndexView;
- (void)p_refreshLoadMoreFooter;
- (void)p_refreshTipFooter;
- (void)p_refreshEmptyView;
- (void)setCustomSectionTypeList:;
- (BOOL)p_isNeedSection:;
- (id)customSectionTypeList;
- (BOOL)isUseSystemIndexView;
- (id)tipFooterView;
- (BOOL)p_isAppendedCellAtIndexPath:;
- (BOOL)p_shouldAppendCellInSection:;
- (void)updateIndexViewConfiguration:;
- (void)p_refreshPage;
- (void)p_updateHighlightSectionHeader;
- (long long)p_currentSection;
- (id)selectCompletion;
- (void)updateEmptyPageConfig:isSearchMode:;
- (void)setSelectCompletion:;
- (void)setTipFooterView:;
- (id)itemID;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setItemID:;
- (id)searchBar;
- (long long)tableView:numberOfRowsInSection:;
- (BOOL)textFieldShouldClear:;
- (long long)numberOfSectionsInTableView:;
- (void)searchBar:textDidChange:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (BOOL)textFieldShouldReturn:;
- (id)sectionIndexTitles;
- (void).cxx_destruct;
- (id)sectionIndexTitlesForTableView:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)source;
- (void)setSource:;
- (id)sectionTitles;
- (void)setDataSource:;
- (double)tableView:heightForHeaderInSection:;
- (void)setSectionTitles:;
- (id)dataSource;
- (long long)tableView:sectionForSectionIndexTitle:atIndex:;
- (void)setSectionIndexTitles:;
- (id)sectionData;
@end
