@interface UIPrintScalingOption : UIPrintOption
@property (nonatomic) UIStepper scaleStepper;
@property (nonatomic) UITextField scaleTextField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)textFieldShouldReturn:;
- (void)dealloc;
- (void)textFieldDidEndEditing:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)dismissKeyboard;
- (void)textFieldDidBeginEditing:;
- (void).cxx_destruct;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (id)textField:editMenuForCharactersInRange:suggestedActions:;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (BOOL)keyboardShowing;
- (void)paperScaleStepperChanged:;
- (void)saveScaleValueToPrintInfo:;
- (id)scaleStepper;
- (void)setScaleStepper:;
- (id)scaleTextField;
- (void)setScaleTextField:;
@end
