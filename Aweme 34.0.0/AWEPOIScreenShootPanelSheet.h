@interface AWEPOIScreenShootPanelSheet : DUXBasicSheet
@property (nonatomic) AWEPOIScreenShotShareService service;
@property (nonatomic) BOOL disableAutoDismiss;
- (void)showOnViewController:completion:;
- (void)setDisableAutoDismiss:;
- (BOOL)disableAutoDismiss;
- (void)dealloc;
- (id)service;
- (void)setService:;
- (void).cxx_destruct;
@end
