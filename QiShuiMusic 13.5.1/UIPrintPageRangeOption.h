@interface UIPrintPageRangeOption : UIPrintOption
@property (nonatomic) UIPrintRangeView pageRangeView;
@property (nonatomic) NSString multiPageRangeTitle;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updateFromPrintInfo;
- (id)printOptionDetailView;
- (void)pdfChanged:;
- (id)pageRangeView;
- (void)setPageRangeView:;
- (id)multiPageRangeTitle;
- (void)setMultiPageRangeTitle:;
@end
