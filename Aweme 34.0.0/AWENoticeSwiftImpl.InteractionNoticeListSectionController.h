@interface AWENoticeSwiftImpl.InteractionNoticeListSectionController : AWEBaseListSectionController
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didCreateCellController:cellViewModel:;
- (void)configSupplementaryFooterView:;
- (id)init;
- (void)dealloc;
- (id)sectionBackgroundColor;
- (void)handleNotification:;
- (void).cxx_destruct;
- (Class)footerViewClass;
+ (BOOL)enableCellControllerDispatch;
@end
