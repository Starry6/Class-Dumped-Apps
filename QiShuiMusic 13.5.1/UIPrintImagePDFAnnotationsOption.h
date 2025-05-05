@interface UIPrintImagePDFAnnotationsOption : UIPrintOption
@property (nonatomic) UISwitch imagePDFAnnotationsSwitch;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summary;
- (void).cxx_destruct;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)changeImagePDFAnnotations:;
- (id)imagePDFAnnotationsSwitch;
- (void)setImagePDFAnnotationsSwitch:;
@end
