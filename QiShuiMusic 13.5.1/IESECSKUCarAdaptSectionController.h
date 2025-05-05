@interface IESECSKUCarAdaptSectionController : IGListSectionController
@property (nonatomic) IESECSKUCarAdaptViewModel viewModel;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)supportedElementKinds;
- (long long)numberOfItems;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
