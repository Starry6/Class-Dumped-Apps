@interface IESECSKUInstallmentEmbeddedSectionController : IGListSectionController
@property (nonatomic) IESECSKUInstallmentViewModel viewModel;
@property (nonatomic) <IESECSKUInstallmentEmbeddedSectionControllerDelegate> delegate;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (long long)numberOfItems;
- (id)init;
- (id)viewModel;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
- (double)minimumLineSpacing;
- (void)didSelectItemAtIndex:;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
