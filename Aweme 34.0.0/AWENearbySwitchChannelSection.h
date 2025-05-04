@interface AWENearbySwitchChannelSection : AWENearbySwitchSection
@property (nonatomic) @? selectBlock;
- (void)setSelectBlock:;
- (id)sizeForHeader;
- (long long)numberOfItems;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndexPath:;
- (id)selectBlock;
@end
