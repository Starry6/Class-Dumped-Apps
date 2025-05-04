@interface AWESearchAdImmersiveBannerListView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSIndexPath currentSelectedIndexPath;
@property (nonatomic) NSArray imageList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setImageList:;
- (void)scrollToIndex:animation:;
- (long long)redirectIndexPathWith:;
- (id)realIndexPathWith:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setupSubviews;
- (id)currentSelectedIndexPath;
- (void)setCurrentSelectedIndexPath:;
- (id)imageList;
- (void)updateWith:;
@end
