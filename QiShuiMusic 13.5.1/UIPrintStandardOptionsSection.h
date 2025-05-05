@interface UIPrintStandardOptionsSection : UIPrintOptionSection
@property (nonatomic) UIPrinterSelectionOption printerSelectionOption;
@property (nonatomic) UIPrintPresetsOption presetsOption;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (BOOL)updatePrintOptionsList;
- (void)setShowContactingPrinter:;
- (id)printerSelectionOption;
- (void)setPrinterSelectionOption:;
- (id)presetsOption;
- (void)setPresetsOption:;
@end
