@interface AWEPadPolymericChannelSlidableInnerSectionController : AWEPadHorizontalSectionInnerController
@property (nonatomic) AWEPadPolymericChannelSlidableInnerSectionViewModel viewModel;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:;
- (double)dynamicSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
