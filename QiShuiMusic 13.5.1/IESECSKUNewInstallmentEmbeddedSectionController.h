@interface IESECSKUNewInstallmentEmbeddedSectionController : IGListSectionController
@property (nonatomic) IESECSKUNewInstallmentViewModel viewModel;
@property (nonatomic) <IESECSKUInstallmentEmbeddedSectionControllerDelegate> delegate;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (long long)numberOfItems;
- (id)viewModel;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
