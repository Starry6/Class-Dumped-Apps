@interface AWETabContainerSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) NSArray itemModelsArray;
- (id)itemModelsArray;
- (void)setItemModelsArray:;
- (void)setNeedsUpdate:;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
+ (id)viewModel;
@end
