@interface AWEFansListViewController : AWERelationListViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL recordTTI;
@property (nonatomic) BOOL fetchUserListOnly;
@property (nonatomic) AWEEmptyPageSectionController emptySectionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? didBlockUser;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)listDidReloadDataWithCollectionView:;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (void)addBinding;
- (id)aAWERelationDOUYINHTSAdapter;
- (id)aAWEVCDAuthorizeDOUYINHTSAdapter;
- (void)setFetchUserListOnly:;
- (BOOL)fetchUserListOnly;
- (void)reloadEmptyHeight;
- (BOOL)recordTTI;
- (void)setRecordTTI:;
- (void)setDidBlockUser:;
- (void)setEmptySectionController:;
- (double)emptyViewHeight;
- (id)emptySectionController;
- (void)transferToHelpDesk;
- (void)vCDAuthorizedButtonTap;
- (void)__refreshAfterAuthorized;
- (id)didBlockUser;
- (id)collectionView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)setCollectionView:;
- (void)endRefreshing;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setupCollectionView:;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
+ (Class)aAWEVCDAuthorizeDOUYINHTSAdapterClass;
@end
