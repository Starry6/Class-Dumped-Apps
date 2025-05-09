@interface AWEKnowledgeAlbumPreviewView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray imageModelsArray;
@property (nonatomic) UIView leftGradientView;
@property (nonatomic) UIView rightGradientView;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL hasExceedsMaximumWidth;
@property (nonatomic) UIPanGestureRecognizer panGes;
@property (nonatomic) {CGPoint=dd} lastLocation;
@property (nonatomic) {CGPoint=dd} initialPoint;
@property (nonatomic) <AWEKnowledgeAlbumPreviewViewDelegate> delegate;
@property (nonatomic) NSIndexPath currentIndexPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollToIndex:;
- (void)updateMaxWidth:;
- (id)panGes;
- (void)setPanGes:;
- (id)aAWEPadFullPageFeedAdapter;
- (void)p_setupViews;
- (id)leftGradientView;
- (id)rightGradientView;
- (void)setLeftGradientView:;
- (void)setRightGradientView:;
- (id)imageModelsArray;
- (void)setImageModelsArray:;
- (void)p_scrollPreviewToIndexPath:atScrollPosition:animated:;
- (void)p_selectItemAtIndexPath:;
- (void)p_updateSelectedItemWithIndexPath:isSelected:;
- (void)setHasExceedsMaximumWidth:;
- (void)setupGradientLayerWithDirection:view:;
- (BOOL)hasExceedsMaximumWidth;
- (id)lastLocation;
- (id)initialPoint;
- (id)currentIndexPath;
- (id)collectionView;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setInitialPoint:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)addObserver;
- (double)maxWidth;
- (void)setCollectionView:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setLastLocation:;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setCurrentIndexPath:;
- (id)currentModel;
- (void)updateColor;
- (void)updateWithModel:;
+ (Class)aAWEPadFullPageFeedAdapterClass;
@end
