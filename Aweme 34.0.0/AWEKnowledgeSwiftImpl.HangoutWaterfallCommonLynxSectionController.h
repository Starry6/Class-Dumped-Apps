@interface AWEKnowledgeSwiftImpl.HangoutWaterfallCommonLynxSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (void)sectionWillEnterWorkingRange;
- (long long)waterfallColumnCount;
- (id)bdv_itemIDForCell:index:model:;
- (void)bdv_cellDidVisible:index:model:metaData:;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (id)sizeForItemAtIndex:;
@end
