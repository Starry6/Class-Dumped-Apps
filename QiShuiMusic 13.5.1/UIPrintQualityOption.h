@interface UIPrintQualityOption : UIPrintOption
@property (nonatomic) NSArray printQualities;
@property (nonatomic) UIPrintQualityView printQualityView;
@property (nonatomic) NSArray qualities;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summaryString;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (id)qualities;
- (void)setQualities:;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updateFromPrintInfo;
- (void)currentPrinterChanged;
- (id)shortSummary;
- (id)printOptionDetailView;
- (id)printQualities;
- (void)setPrintQualities:;
- (id)printQualityView;
- (void)setPrintQualityView:;
@end
