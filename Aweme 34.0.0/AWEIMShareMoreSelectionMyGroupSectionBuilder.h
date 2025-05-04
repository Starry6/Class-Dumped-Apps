@interface AWEIMShareMoreSelectionMyGroupSectionBuilder : IESIMContactPickerNormalSectionBuilder
@property (nonatomic) IESIMContactPickerComponentContext componentContext;
@property (nonatomic) NSArray sectionModels;
- (id)componentContext;
- (void)setComponentContext:;
- (id)sectionModels;
- (void)setSectionModels:;
- (id)buildSectionViewModelsWithCellViewModels:;
- (void)registReusableViewForCollectionView:;
- (void)p_refreshSelectStatusWithCellModels:;
- (id)collectionView:referenceSizeForHeaderInSectionModel:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
