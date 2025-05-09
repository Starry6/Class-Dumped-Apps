@interface AWEComposerBeautySubItemsViewController : UIViewController
@property (nonatomic) NSString parentItemID;
@property (nonatomic) AWEComposerBeautyEffectCategoryWrapper parentCategoryWrapper;
@property (nonatomic) AWEComposerBeautyEffectWrapper parentEffectWrapper;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray effectWrappers;
@property (nonatomic) AWEComposerBeautyEffectWrapper selectedEffect;
@property (nonatomic) AWEComposerBeautyEffectWrapper candidateEffect;
@property (nonatomic) <ACCBeautyUIConfigProtocol> uiConfig;
@property (nonatomic) AWEComposerBeautyViewModel viewModel;
@property (nonatomic) BOOL shouldShowAppliedIndicator;
@property (nonatomic) BOOL hadAutoScroll;
@property (nonatomic) BOOL isOnShootPage;
@property (nonatomic) AWEComposerBeautySwitchCollectionViewCell switchCell;
@property (nonatomic) AWEComposerBeautyEffectWrapper resetPlaceHolderWrapper;
@property (nonatomic) <AWEComposerBeautySubItemsViewControllerDelegate> delegate;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)uiConfig;
- (void)updateUIConfig:;
- (id)selectedEffect;
- (void)setSelectedEffect:;
- (void)setUiConfig:;
- (void)reloadPanel;
- (void)handleEffectDownloadStatusChange:;
- (BOOL)enableBeautyCategorySwitch;
- (void)setShouldShowAppliedIndicator:;
- (void)reloadCurrentItem;
- (void)setShouldShowAppliedIndicatorForAllCells:;
- (void)reloadBeautySubItemsViewIfIsOn:changedByUser:;
- (void)updateResetModeButton;
- (id)initWithViewModel:parentCategory:OrParentEffect:;
- (void)updateWithParentCategory:OrParentEffect:;
- (void)updateWithEffectWrappers:parentItemID:selectedEffect:exclusive:;
- (void)setParentItemID:;
- (void)setEffectWrappers:;
- (BOOL)enableBeautyCategoryResetMode;
- (id)resetPlaceHolderWrapper;
- (void)setParentCategoryWrapper:;
- (void)setParentEffectWrapper:;
- (id)effectWrappers;
- (id)cellForEffectWrapper:;
- (id)candidateEffect;
- (void)handleSelectEffectWrapper:atIndexPath:fromDownload:;
- (BOOL)appliedStatusForEffectWrapper:;
- (id)parentCategoryWrapper;
- (id)parentEffectWrapper;
- (id)indexPathForEffect:;
- (id)switchCell;
- (void)didTapBeautyCategorySwitchCell;
- (void)didTapBeautyCategoryResetCell;
- (void)deselectEffectWrapper:;
- (void)setCandidateEffect:;
- (void)updateStatusForDownloadedEffectWrapper:;
- (void)selectEffectWrapper:;
- (void)setSwitchCell:;
- (BOOL)shouldShowAppliedIndicator;
- (id)initWithEffectWrappers:viewModel:parentItemID:selectedEffect:exclusive:;
- (id)cellForSwitchButton:;
- (BOOL)hadAutoScroll;
- (void)setHadAutoScroll:;
- (BOOL)isOnShootPage;
- (void)setIsOnShootPage:;
- (void)setResetPlaceHolderWrapper:;
- (id)collectionView;
- (void)dealloc;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)viewDidLoad;
- (double)itemWidth;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (void)setExclusive:;
- (BOOL)exclusive;
- (id)parentItemID;
@end
