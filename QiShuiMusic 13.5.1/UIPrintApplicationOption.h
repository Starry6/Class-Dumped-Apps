@interface UIPrintApplicationOption : UIPrintOption
@property (nonatomic) UIViewController<UIPrintAppExtensionProtocol> appPrintExtensionController;
- (id)summary;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (id)initWithPrintInfo:appPrintExtensionController:printPanelViewController:;
- (id)appPrintExtensionController;
- (void)setAppPrintExtensionController:;
@end
