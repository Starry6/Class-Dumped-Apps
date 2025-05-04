@interface AWELongPressPanelAddToCustomViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (id)albumImagePickerViewController;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)trackAddEmoji;
+ (BOOL)shouldShowAddToCustomWithAwemeModel:;
+ (BOOL)p_hasDownloadPermissionWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
