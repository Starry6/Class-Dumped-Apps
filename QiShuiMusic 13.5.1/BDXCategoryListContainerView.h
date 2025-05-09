@interface BDXCategoryListContainerView : UIView
@property (nonatomic) <BDXCategoryListContainerViewDelegate> delegate;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) q currentIndex;
@property (nonatomic) NSMutableDictionary validListDict;
@property (nonatomic) q willAppearIndex;
@property (nonatomic) q willDisappearIndex;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BDXCategoryListContainerViewController containerVC;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) BOOL horizonScrollEnable;
@property (nonatomic) Q containerType;
@property (nonatomic) double initListPercent;
@property (nonatomic) BOOL bounces;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)listWillAppear:;
- (void)setContainerVC:;
- (double)initListPercent;
- (long long)willAppearIndex;
- (BOOL)checkIndexValid:;
- (id)containerVC;
- (id)currentScrollView;
- (void)didClickSelectedItemAtIndex:;
- (BOOL)horizonScrollEnable;
- (void)initListIfNeededAtIndex:;
- (void)listDidAppear:;
- (void)listDidAppearOrDisappear:;
- (void)listDidDisappear:;
- (void)listWillDisappear:;
- (void)setDefaultSelectedIndex:;
- (void)setGestureBeginOffset:;
- (void)setGestureDirection:;
- (void)setHorizonScrollEnable:;
- (void)setInitListPercent:;
- (void)setLynxView:;
- (void)setValidListDict:;
- (void)setWillAppearIndex:;
- (void)setWillDisappearIndex:;
- (void)setinitListPercent:;
- (id)validListDict;
- (long long)willDisappearIndex;
- (void)reloadData;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDecelerating:;
- (void)setScrollView:;
- (void)layoutSubviews;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setCurrentIndex:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (id)scrollView;
- (void)setCollectionView:;
- (id)delegate;
- (id)contentScrollView;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setRTL:;
- (id)collectionView;
- (BOOL)isRTL;
- (void)setIsRTL:;
- (void)setBounces:;
- (BOOL)bounces;
- (unsigned long long)containerType;
- (void)initializeViews;
- (id)initWithType:delegate:;
@end
