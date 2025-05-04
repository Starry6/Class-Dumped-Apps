@interface AWELongPressPanelReportViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)generateReportLogExtraDict;
+ (BOOL)shouldShowReportWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
+ (BOOL)shouldShowReportEntranceForPanelForModel:;
+ (id)scenesWithReportEntranceToShow;
@end
