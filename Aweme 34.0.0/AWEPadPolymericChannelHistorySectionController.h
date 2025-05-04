@interface AWEPadPolymericChannelHistorySectionController : AWEPadPolymericChannelSlidableSectionController
@property (nonatomic) AWEPadPolymericChannelHistorySectionViewModel viewModel;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
+ (Class)sectionViewModelClass;
@end
