@interface IESECMediaPreviewViewController : UIViewController
@property (nonatomic) NSArray previewItems;
@property (nonatomic) NSArray previewTabItems;
@property (nonatomic) Q index;
@property (nonatomic) IESECPreviewItem curPreviewItem;
@property (nonatomic) IESECHighlightButton closeButton;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) IESECInsetsLabel indexLabel;
@property (nonatomic) IESECommerceLightTabView tabView;
@property (nonatomic) UITextView titleTextView;
@property (nonatomic) UIView titleTextBgView;
@property (nonatomic) Q titleType;
@property (nonatomic) UIScrollView specScrollView;
@property (nonatomic) UILabel titleIndexLabel;
@property (nonatomic) UILabel skuSpecLabel;
@property (nonatomic) q normalCount;
@property (nonatomic) NSArray titles;
@property (nonatomic) NSMutableArray specLabelArray;
@property (nonatomic) NSMutableArray specBgViewArray;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) BOOL showIndex;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showTab;
@property (nonatomic) BOOL isHidenCloseButton;
@property (nonatomic) IESECUIImageView findSameEntry;
@property (nonatomic) Q enterFrom;
@property (nonatomic) BOOL isCoveredByOtherController;
@property (nonatomic) UIViewController kolVideoDetailVC;
@property (nonatomic) IESECMediaPreviewSpecsView skuSpecsView;
@property (nonatomic) UIView currentImageView;
@property (nonatomic) double imageContainerAlpha;
@property (nonatomic) <IESECMediaPreviewDelegate> delegate;
@property (nonatomic) UIPanGestureRecognizer panToDismiss;
@property (nonatomic) @? viewWillBeCovered;
@property (nonatomic) IESECImagePreviewInteractiveTransition transition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)previewTabItems;
- (void)setupIndexLabel;
- (BOOL)showTab;
- (id)specBgViewArray;
- (void)setNormalCount:;
- (id)titleIndexLabel;
- (id)titleTextBgView;
- (void)closeButtonDidTap;
- (long long)coverPreviewIndexToTabIndex:;
- (id)curPreviewItem;
- (void)enableScroll:;
- (unsigned long long)enterFrom;
- (id)findSameEntry;
- (void)findSameGoods;
- (void)hideCloseButton:;
- (double)imageContainerAlpha;
- (id)initWithDetailMediaRequest:;
- (BOOL)isCoveredByOtherController;
- (BOOL)isHidenCloseButton;
- (id)kolVideoDetailVC;
- (void)kolVideoPreloadWithIndexPath:;
- (id)panToDismiss;
- (void)playerDidChangePlaybackStateWithAction:;
- (void)playerMuteStateDidChanged:;
- (void)previewKOLVideoDetailUpdatedWithDataController:;
- (void)progressIsSliding:;
- (void)registerInitMessages;
- (void)reloadDataWithMediaRequest:;
- (void)resetVideoToOriginVC;
- (void)resetVideoWrapperVC:;
- (void)scrollToItemAtIndex:;
- (void)setCurPreviewItem:;
- (void)setEnterFrom:;
- (void)setFindSameEntry:;
- (void)setImageContainerAlpha:;
- (void)setIndexLabel:;
- (void)setIsCoveredByOtherController:;
- (void)setIsHidenCloseButton:;
- (void)setKolVideoDetailVC:;
- (void)setPanToDismiss:;
- (void)setPreviewTabItems:;
- (void)setShowIndex:;
- (void)setShowTab:;
- (void)setSkuSpecLabel:;
- (void)setSkuSpecsView:;
- (void)setSpecBgViewArray:;
- (void)setSpecLabelArray:;
- (void)setSpecScrollView:;
- (void)setTabView:;
- (void)setTitleIndexLabel:;
- (void)setTitleTextBgView:;
- (void)setViewWillBeCovered:;
- (void)setupFindSameEntry;
- (void)setupNavView;
- (void)setupNewSKUSpecs;
- (void)setupSKUSpecTitle;
- (void)setupSpecScrollView;
- (BOOL)showIndex;
- (id)skuSpecLabel;
- (id)skuSpecsView;
- (id)specLabelArray;
- (id)specScrollView;
- (void)tabClickToIndex:;
- (void)trackWithEventName:andParams:;
- (void)unregisterMessages;
- (void)updateFindSameLabelWithIndex:;
- (void)updateIndexLabelWithIndex:;
- (void)updateSkuSpecLabelWithIndex:;
- (void)updateSpecLabelWithIndex:rate:;
- (void)updateTitleLabelWithIndex:;
- (void)userDidTap;
- (void)videoTrackWithEventName:andParams:;
- (id)viewWillBeCovered;
- (unsigned long long)titleType;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)dismiss;
- (void)setTransition:;
- (id)transition;
- (id)currentImageView;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (BOOL)prefersStatusBarHidden;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (BOOL)showTitle;
- (unsigned long long)index;
- (void)setShowTitle:;
- (void)setCollectionView:;
- (void)viewWillDisappear:;
- (id)delegate;
- (id)indexLabel;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setTitleType:;
- (id)collectionView;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)viewDidLoad;
- (id)titles;
- (void)setTitles:;
- (void)setupCollectionView;
- (void)setupUI;
- (void)setupTitleLabel;
- (id)titleTextView;
- (void)setTitleTextView:;
- (id)closeButton;
- (void)setCloseButton:;
- (void)setPreviewItems:;
- (id)previewItems;
- (id)tap;
- (void)setTap:;
- (long long)normalCount;
- (id)tabView;
@end
