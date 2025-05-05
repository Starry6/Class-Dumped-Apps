@interface UIPrinterSelectionOption : UIPrintOption
@property (nonatomic) UIPrinterBrowserViewController browserController;
@property (nonatomic) BOOL contactingPrinter;
@property (nonatomic) PKPrinter printer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)printer;
- (id)browserController;
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (void)dismissAnimated:;
- (id)summary;
- (void).cxx_destruct;
- (void)setPrinter:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setBrowserController:;
- (void)cancelPrinting;
- (id)initWithPrintInfo:printPanelViewController:;
- (void)setShowContactingPrinter:;
- (void)showContacting;
- (void)printerBrowserViewDidDisappear;
- (BOOL)filtersPrinters;
- (id)printOptionTableViewCell;
- (id)printerDisplayName:;
- (void)didSelectPrintOption;
- (BOOL)contactingPrinter;
- (void)setContactingPrinter:;
@end
