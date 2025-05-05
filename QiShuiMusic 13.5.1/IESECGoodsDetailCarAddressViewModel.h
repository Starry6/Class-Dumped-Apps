@interface IESECGoodsDetailCarAddressViewModel : IESECGoodsDetailPageBaseViewModel
- (void)configDataModelWithPoiSelect:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)setupCurrentViewSize;
- (void)setupViewModel;
- (void)updateModelWithParams:;
- (void)updatePOIFromSharedDict;
@end
