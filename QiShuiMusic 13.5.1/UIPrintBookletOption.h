@interface UIPrintBookletOption : UIPrintOption
@property (nonatomic) UISwitch bookletSwitch;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summaryString;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)bookletSelected:;
- (id)bookletSwitch;
- (void)setBookletSwitch:;
@end
