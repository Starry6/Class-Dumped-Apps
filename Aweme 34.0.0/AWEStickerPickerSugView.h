@interface AWEStickerPickerSugView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView separateView;
@property (nonatomic) <AWEStickerPickerSugViewDelegate> delegate;
@property (nonatomic) NSArray sugList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSeparateView:;
- (id)separateView;
- (id)sugList;
- (void)setSugList:;
- (id)collectionView;
- (id)init;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setupSubviews;
@end
