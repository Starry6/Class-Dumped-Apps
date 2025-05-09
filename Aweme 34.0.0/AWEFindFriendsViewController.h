@interface AWEFindFriendsViewController : AWEBaseListViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView searchPlaceHolderView;
@property (nonatomic) AWEAnimatedButton searchPlaceHolderContainerView;
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) UILabel searchPlaceHolderLabel;
@property (nonatomic) AWEInviteSearchViewController searchVC;
@property (nonatomic) AWEFindFriendsSearchSectionController searchSectionController;
@property (nonatomic) NSString searchText;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enterType;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL needTrackEnter;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL needShowContactBubble;
@property (nonatomic) q listType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL useNewRecommendCount;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)customLayoutCollectionView:;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (void)setupBinding;
- (BOOL)needShowContactBubble;
- (id)searchVC;
- (void)setSearchVC:;
- (void)searchUser;
- (void)setNeedTrackEnter:;
- (void)showSearchPlaceHolderView;
- (void)hideSearchPlaceHolderView;
- (void)p_rotated:;
- (void)fetchList;
- (BOOL)needTrackEnter;
- (id)searchPlaceHolderView;
- (void)uploadAddressBook;
- (id)aAWEUserRecommendModuleServiceDOUYINLiteAdaper;
- (void)p_setUpPlachHolderViewWithSearchText:;
- (void)setSearchSectionController:;
- (void)setUseNewRecommendCount:;
- (BOOL)useNewRecommendCount;
- (void)p_searchUser;
- (void)p_showSearchPlaceHolderView;
- (id)searchPlaceHolderContainerView;
- (id)searchSectionController;
- (id)searchPlaceHolderLabel;
- (id)initWithInsertTopUIDs:listType:;
- (void)handleUploadAddressBook;
- (void)setSearchPlaceHolderView:;
- (void)setSearchPlaceHolderContainerView:;
- (void)setSearchPlaceHolderLabel:;
- (void)viewWillDisappear:;
- (id)init;
- (void)animationDidStop:finished:;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (void)viewDidAppear:;
- (id)searchText;
- (BOOL)hasAction;
- (id)previousPage;
- (id)searchIconImageView;
- (void)setPreviousPage:;
- (void)setSearchIconImageView:;
- (long long)listType;
- (void)setListType:;
- (void)setupUI;
- (id)bgColor;
- (id)enterType;
- (void)setEnterType:;
- (void)setupCollectionView:;
+ (Class)aAWEUserRecommendModuleServiceDOUYINLiteAdaperClass;
@end
