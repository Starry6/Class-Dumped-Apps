@interface UIPrintScalingSection : UIPrintOptionSection
@property (nonatomic) UIPrintScaleToFitOption scaleToFitPrintOption;
@property (nonatomic) UIPrintScaleDownOnlyOption scaleDownOnlyPrintOption;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (BOOL)updatePrintOptionsList;
- (void)scaleToFitChanged;
- (id)scaleToFitPrintOption;
- (void)setScaleToFitPrintOption:;
- (id)scaleDownOnlyPrintOption;
- (void)setScaleDownOnlyPrintOption:;
@end
