@interface IESECBFFSliceSectionController : IESECGoodsDetailBaseSectionController
@property (nonatomic) IESECBFFRowSectionLayout sectionLayout;
@property (nonatomic) BOOL isSmallMode;
@property (nonatomic) IESECGoodsDetailSectionObject sectionObject;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) IESECGoodsDetailSliceManager sliceManager;
- (void)setIsSmallMode:;
- (id)cellForItemAtIndex:;
- (double)getSliceHeightAtIndex:;
- (id)getSliceViewAtIndex:;
- (BOOL)isSmallMode;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (void)setSectionObject:;
- (void)setSliceManager:;
- (id)sliceManager;
- (long long)numberOfItems;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (id)sectionObject;
- (id)sizeForItemAtIndex:;
@end
