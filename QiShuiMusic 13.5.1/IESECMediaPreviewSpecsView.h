@interface IESECMediaPreviewSpecsView : UIView
@property (nonatomic) UICollectionView skuSpecCollectionView;
@property (nonatomic) UIView skuBorderView;
@property (nonatomic) NSArray titles;
@property (nonatomic) Q index;
@property (nonatomic) UICollectionView previewCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreviewCollectionView:;
- (void)setSkuBorderView:;
- (void)setSkuSpecCollectionView:;
- (id)skuBorderView;
- (id)skuSpecCollectionView;
- (unsigned long long)specTitleTypeAtIndex:;
- (void)updateSKUCollectionView;
- (void)updateSKUSpecState;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (unsigned long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (id)titles;
- (void)setTitles:;
- (void)setupUI;
- (id)initWithTitles:;
- (id)previewCollectionView;
@end
