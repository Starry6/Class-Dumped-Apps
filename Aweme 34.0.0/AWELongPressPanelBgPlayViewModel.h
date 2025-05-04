@interface AWELongPressPanelBgPlayViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowListenFeedWithAwemeModel:referString:enterFrom:;
+ (id)longPressPanelViewModel;
@end
