@interface UIPrintCopiesOption : UIPrintOption
@property (nonatomic) UIStepper copiesStepper;
@property (nonatomic) UITextField copiesTextField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)textFieldShouldReturn:;
- (void)dealloc;
- (void)textFieldDidEndEditing:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)dismissKeyboard;
- (void).cxx_destruct;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (id)textField:editMenuForCharactersInRange:suggestedActions:;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (BOOL)keyboardShowing;
- (void)copiesStepperChanged:;
- (id)copiesStepper;
- (void)setCopiesStepper:;
- (id)copiesTextField;
- (void)setCopiesTextField:;
@end
