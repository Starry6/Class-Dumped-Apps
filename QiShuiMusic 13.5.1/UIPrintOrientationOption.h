@interface UIPrintOrientationOption : UIPrintOption
@property (nonatomic) UISegmentedControl orientationSegmentedControl;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summary;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)changeOrientation:;
- (id)orientationSegmentedControl;
- (void)setOrientationSegmentedControl:;
@end
