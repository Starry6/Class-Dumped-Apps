@interface IESECGoodsFeedResourceCellViewModel : IESECGoodsFeedCellBaseViewModel
- (id)calculateCellSizeForContaineSize:;
- (id)initWithModel:context:useToInsert:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)resourceViewModelWithModel:;
@end
