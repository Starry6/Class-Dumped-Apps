@interface IESECSKUSpecSectionController : IGListSectionController
@property (nonatomic) IESECSKUSpecViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sizeForSupplementaryViewOfKind:atIndex:;
- (id)supplementaryViewSource;
- (id)supportedElementKinds;
- (void)tappedSizeComponent;
- (id)viewForSupplementaryElementOfKind:atIndex:;
- (long long)numberOfItems;
- (id)init;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
