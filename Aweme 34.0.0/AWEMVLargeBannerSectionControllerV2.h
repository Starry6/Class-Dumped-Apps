@interface AWEMVLargeBannerSectionControllerV2 : AWEDCFeedBaseSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)containerViewModel;
- (long long)waterfallColumnCount;
- (double)getCellWidth;
- (id)mvPageContext;
- (void)onCloseIconClickedWithBannerList:;
- (void)onCloseIconClicked;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
