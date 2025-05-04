@interface AWENearbySwitchCitySection : AWENearbySwitchSection
@property (nonatomic) @? selectBlock;
- (void)setSelectBlock:;
- (id)sizeForHeader;
- (id)getDisplayCities;
- (long long)numberOfItems;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)pageType;
- (id)sizeForItemAtIndexPath:;
- (id)selectBlock;
@end
