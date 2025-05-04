@interface AWEMixMiniDetailSectionViewController : AWESingleColumnDetailSectionController
- (void)configCell:index:model:;
- (void)sectionDidEndDisplayingCell:index:;
- (Class)cellClass;
@end
