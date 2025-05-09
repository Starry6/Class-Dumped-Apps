@interface AWEIMPhotoPickerViewController : UIViewController
@property (nonatomic) BOOL viewEverAppeared;
@property (nonatomic) AWEIMPhotoPickerNavView navView;
@property (nonatomic) AWEIMPhotoPickerToolbarView toolbarView;
@property (nonatomic) NSArray collections;
@property (nonatomic) NSArray assetsResult;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView collectionPickerBackgroundView;
@property (nonatomic) AWEIMPhotoCollectionPickerViewController collectionPicker;
@property (nonatomic) UITableView albumListView;
@property (nonatomic) MASConstraint albumListViewBC;
@property (nonatomic) NSArray albumModels;
@property (nonatomic) AWEIMAlbumModel currentAlbumModel;
@property (nonatomic) BOOL hideOriginalImage;
@property (nonatomic) NSString sendButtonTitle;
@property (nonatomic) AWEIMPhotoPickerModel pickerModel;
@property (nonatomic) NSDictionary context;
@property (nonatomic) <AWEIMPhotoPickerViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableGIF;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchPhotoAssetsFromCollection:;
- (id)sendButtonTitle;
- (void)setPickerModel:;
- (id)albumListViewBC;
- (id)navView;
- (void)setAlbumModels:;
- (id)albumListView;
- (id)albumModels;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)collectionPicker;
- (id)collectionPickerBackgroundView;
- (id)currentAlbumModel;
- (BOOL)disableGIF;
- (void)dissmissCollectionPickerWithSelectedCollection:;
- (BOOL)hideOriginalImage;
- (double)navHeight;
- (void)onPhotoBrowserViewDeselectIdentifier:;
- (void)onPhotoBrowserViewSelectIdentifier:asset:;
- (void)p_asyncLoadAlbumsWithType:onCompletion:;
- (void)p_asyncLoadOtherAlbums;
- (void)p_asyncReadAlbumsWithType:onCompletion:;
- (void)p_checkAuthorizationAndFetchAssets;
- (void)p_collectionView:setToBottomAccordingTo:;
- (void)p_fetchPhotoAssets;
- (id)p_generateGridView;
- (void)p_hideAlbumsListView;
- (void)p_navArrowDown;
- (void)p_navArrowUp;
- (void)p_refreshNavTitle;
- (void)p_setUpConstraints;
- (void)p_showAlbumsListView;
- (void)p_trackAlbumChooseComplete;
- (void)p_trackAlbumLoadCompletion;
- (void)photoBrowserViewControllerCancelPickImage:;
- (void)photoBrowserViewControllerFinishPickImage:;
- (void)photoPickerCollectionViewCellSelectAreaTapped:;
- (id)pickerModel;
- (void)pickerModelChanged:;
- (void)presentCollectionPicker;
- (void)setAlbumListView:;
- (void)setAlbumListViewBC:;
- (void)setCollectionPicker:;
- (void)setCollectionPickerBackgroundView:;
- (void)setCurrentAlbumModel:;
- (void)setDisableGIF:;
- (void)setHideOriginalImage:;
- (void)setNavView:;
- (void)setSendButtonTitle:;
- (void)setViewEverAppeared:;
- (BOOL)viewEverAppeared;
- (void)setCollections:;
- (id)init;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (id)collections;
- (void)dealloc;
- (id)context;
- (long long)collectionView:numberOfItemsInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)removeObserver;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setCollectionView:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)collectionView;
- (void)setContext:;
- (void)viewDidLayoutSubviews;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (id)toolbarView;
- (void)setToolbarView:;
- (void)scrollToBottom;
- (void)setAssetsResult:;
- (id)assetsResult;
- (void)sendButtonPressed:;
- (double)toolbarHeight;
+ (double)contentHeightForFlowLayout:numberOfItems:;
+ (id)transformCollectionResultIntoAlbumModels:;
@end
