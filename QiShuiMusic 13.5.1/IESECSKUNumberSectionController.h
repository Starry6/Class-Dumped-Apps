@interface IESECSKUNumberSectionController : IGListSectionController
@property (nonatomic) IESECSKUNumberViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (void)minusTapped;
- (void)plusTapped;
- (id)supportedElementKinds;
- (long long)numberOfItems;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)sizeForItemAtIndex:;
@end
