@interface UIPrintFlipHorizontalOption : UIPrintOption
@property (nonatomic) UISwitch flipHorizontalSwitch;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summaryString;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)flipHorizontalSelected:;
- (id)flipHorizontalSwitch;
- (void)setFlipHorizontalSwitch:;
@end
