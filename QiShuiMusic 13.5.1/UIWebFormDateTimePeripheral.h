@interface UIWebFormDateTimePeripheral : NSObject
@property (nonatomic) DOMHTMLInputElement _inputElement;
@property (nonatomic) <UIWebFormControl> _control;
- (void)dealloc;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (id)_inputElement;
- (void)set_inputElement:;
- (long long)_datePickerModeForInputType:;
- (id)initWithDOMHTMLInputElement:;
- (id)_control;
- (void)set_control:;
+ (id)createPeripheralWithDOMHTMLInputElement:;
@end
