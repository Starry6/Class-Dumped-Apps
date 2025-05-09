@interface AWEStickerPickerCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> loadingView;
@property (nonatomic) UIView<AWEStickerPickerEffectErrorViewProtocol> errorView;
@property (nonatomic) UIView errorViewContainer;
@property (nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> emptyView;
@property (nonatomic) <AWEStickerPickerEffectUIConfigurationProtocol> UIConfig;
@property (nonatomic) AWEStickerPickerFootView footerView;
@property (nonatomic) double prefetchRemainHeight;
@property (nonatomic) BOOL firstScreenIconsHaveShow;
@property (nonatomic) double beginLoadStickerIconTime;
@property (nonatomic) double firstScreenLoadFinishTime;
@property (nonatomic) BOOL enableTitleAnimationDegrade;
@property (nonatomic) UICollectionView stickerCollectionView;
@property (nonatomic) <ACCGenericEffectCategoryModel> categoryModel;
@property (nonatomic) <AWEStickerPickerCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateUIConfig:;
- (void)hideErrorView;
- (void)showEmptyView;
- (id)UIConfig;
- (void)setUIConfig:;
- (void)hideEmptyView;
- (id)categoryModel;
- (void)setCategoryModel:;
- (id)stickerCollectionView;
- (void)updateIconImageIfNeededWithSticker:forCell:atIndexPath:;
- (void)setErrorViewContainer:;
- (id)errorViewContainer;
- (void)onErrorTap;
- (void)scrollToItemAtSection:index:animated:;
- (void)setBeginLoadStickerIconTime:;
- (BOOL)firstScreenIconsHaveShow;
- (double)beginLoadStickerIconTime;
- (void)setFirstScreenIconsHaveShow:;
- (void)setFirstScreenLoadFinishTime:;
- (void)setEnableTitleAnimationDegrade:;
- (void)setPrefetchRemainHeight:;
- (void)p_clearFootView;
- (id)p_createFootView;
- (BOOL)p_shouldUpdateFailStatus:;
- (BOOL)isSectionEnabled;
- (BOOL)enableTitleAnimationDegrade;
- (id)getCategoryIndexFromSectionPath:;
- (long long)allSectionStickers;
- (double)prefetchRemainHeight;
- (void)didFinishStickerIconShowing;
- (void)scrollToItemAtSection:index:offset:animated:;
- (void)setStickerCollectionView:;
- (double)firstScreenLoadFinishTime;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)reloadData;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)setFooterView:;
- (id)delegate;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)footerView;
- (void)prepareForReuse;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setLoadingView:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)updateStatus:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)emptyView;
- (void)setEmptyView:;
- (void)showLoadingView;
- (void)showErrorView;
- (id)errorView;
- (void)setErrorView:;
- (void)hideLoadingView;
+ (Class)stickerCellClass;
+ (void)setStickerCellClass:;
+ (id)identifier;
@end
