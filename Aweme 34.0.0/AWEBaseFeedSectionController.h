@interface AWEBaseFeedSectionController : AWEBaseListSectionController
@property (nonatomic) NSObject<AWEBaseFeedSectionConfigurationOverride> configuration;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (void)setConfiguration:;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)configuration;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
