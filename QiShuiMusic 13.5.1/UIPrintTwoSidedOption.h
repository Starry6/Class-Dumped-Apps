@interface UIPrintTwoSidedOption : UIPrintOption
@property (nonatomic) UISwitch duplexSwitch;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)changeDuplex:;
- (id)duplexSwitch;
- (void)setDuplexSwitch:;
@end
