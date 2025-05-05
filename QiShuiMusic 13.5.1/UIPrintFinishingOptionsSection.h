@interface UIPrintFinishingOptionsSection : UIPrintOptionSection
@property (nonatomic) UIPrintFinishingsOption finishingPrintOption;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (BOOL)updatePrintOptionsList;
- (void)currentPrinterChanged;
- (void)didSelectPrintOptionSection;
- (id)finishingPrintOption;
- (void)setFinishingPrintOption:;
@end
