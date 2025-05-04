@interface AWELiveVSTabBannerSectionController : AWELiveVSTabBaseSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)containerViewDidAppear;
- (void)containerViewDidDisAppear;
- (id)cellContentSizeWithCollectionViewSize:;
- (double)separatorHeight;
@end
