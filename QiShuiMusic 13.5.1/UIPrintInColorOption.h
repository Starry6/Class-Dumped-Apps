@interface UIPrintInColorOption : UIPrintOption
@property (nonatomic) UISwitch printInColorSwitch;
@property (nonatomic) BOOL canShowColor;
@property (nonatomic) q savedOutputType;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)changePrintInColor:;
- (BOOL)printInColor;
- (void)setPrintInColor:;
- (id)printInColorSwitch;
- (void)setPrintInColorSwitch:;
- (BOOL)canShowColor;
- (void)setCanShowColor:;
- (long long)savedOutputType;
- (void)setSavedOutputType:;
@end
