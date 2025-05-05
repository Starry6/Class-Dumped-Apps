@interface UIPrinterPickerController : NSObject
@property (nonatomic) UIPrinter selectedPrinter;
@property (nonatomic) <UIPrinterPickerControllerDelegate> delegate;
- (void)dismissAnimated:;
- (void)setDelegate:;
- (BOOL)presentAnimated:completionHandler:;
- (BOOL)presentFromRect:inView:animated:completionHandler:;
- (BOOL)presentAnimated:hostingScene:completionHandler:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)presentFromBarButtonItem:animated:completionHandler:;
- (id)initWithInitiallySelectedPrinter:;
- (BOOL)_setupPickerPanel:;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (void)_printerPickerDidDismiss;
- (BOOL)_delegateFiltersPrinters;
- (BOOL)_shouldShowPrinter:;
- (id)selectedPrinter;
- (void)setSelectedPrinter:;
+ (id)printerPickerControllerWithInitiallySelectedPrinter:;
@end
