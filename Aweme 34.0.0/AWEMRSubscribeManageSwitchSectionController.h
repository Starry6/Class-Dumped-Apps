@interface AWEMRSubscribeManageSwitchSectionController : AWEBaseListSectionController
@property (nonatomic) AWECodeGenServiceAccountModel serviceAccount;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)configSupplementaryFooterView:;
- (void)handleSwitchEvent:model:userInfo:;
- (id)init;
- (id)footerTitle;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (Class)footerViewClass;
- (id)serviceAccount;
@end
