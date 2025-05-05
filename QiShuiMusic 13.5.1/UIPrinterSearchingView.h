@interface UIPrinterSearchingView : UIView
@property (nonatomic) _UIPrintMessageAndSpinnerView messageAndSpinner;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setSearching:;
- (void)updateFont;
- (void)searchTimeout;
- (id)messageAndSpinner;
- (void)setMessageAndSpinner:;
@end
