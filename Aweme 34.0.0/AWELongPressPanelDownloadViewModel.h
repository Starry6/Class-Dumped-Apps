@interface AWELongPressPanelDownloadViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)download;
+ (id)longPressPanelViewModel;
@end
