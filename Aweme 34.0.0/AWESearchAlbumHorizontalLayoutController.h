@interface AWESearchAlbumHorizontalLayoutController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSArray albumImages;
@property (nonatomic) BDImageView transitionView;
@property (nonatomic) <AWESearchAlbumHorizontalLayoutControllerDelegate> delegate;
@property (nonatomic) BOOL isInnerRerank;
@property (nonatomic) q lastTapIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)albumImages;
- (void)setAlbumImages:;
- (void)setLastTapIndex:;
- (long long)lastTapIndex;
- (void)updateTapIndex:;
- (id)currentTransitionView;
- (void)didEndShowing;
- (BOOL)isInnerRerank;
- (void)updateWithIndex:;
- (void)setIsInnerRerank:;
- (void)updateTransitionViewWithIndex:;
- (void)willStartShowing;
- (void)resetTapInfo;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (void)setModel:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)delegate;
- (void)viewWillLayoutSubviews;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLoad;
- (id)transitionContext;
- (void)setCollectionView:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (id)transitionView;
- (void)setTransitionView:;
- (void)updateWithModel:;
+ (long long)syncGetSearchAlbumStyle;
+ (double)getContainerSizeFromImages:containerHeight:;
@end
