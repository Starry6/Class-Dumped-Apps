@interface AWESharePostViewController : UIViewController
@property (nonatomic) AWEUserModel currUser;
@property (nonatomic) NSObject<AWEUserPostsDataManagerProtocol> dataManager;
@property (nonatomic) UIView loadingView;
@property (nonatomic) AWEFeedRefreshFooter footer;
@property (nonatomic) BOOL multipleSelectEnable;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <AWEShareSelectDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (id)aAWEPadModuleAdapter;
- (void)p_loadMoreData;
- (void)p_endRefreshingWithMore:list:error:;
- (void)p_addLoadingView;
- (void)p_removeLoadingView;
- (void)p_addNetworkErrorView;
- (void)p_addEmptyDataView;
- (id)currUser;
- (void)setCurrUser:;
- (BOOL)multipleSelectEnable;
- (void)setMultipleSelectEnable:;
- (id)footer;
- (id)collectionView;
- (id)init;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)dataManager;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setCollectionView:;
- (void)setDataManager:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setFooter:;
+ (Class)aAWEPadModuleAdapterClass;
@end
