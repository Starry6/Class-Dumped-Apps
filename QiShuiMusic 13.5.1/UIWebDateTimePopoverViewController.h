@interface UIWebDateTimePopoverViewController : UIViewController
@property (nonatomic) <UIWebFormControl> _innerWebDateTimeControl;
- (void)dealloc;
- (void)loadView;
- (id)initWithDOMHTMLInputElement:datePickerMode:;
- (id)_innerWebDateTimeControl;
- (void)set_innerWebDateTimeControl:;
@end
