@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover
@property (nonatomic) UIWebDateTimePopoverViewController _webDateTimeViewController;
- (void)dealloc;
- (void)clear:;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLInputElement:datePickerMode:;
- (id)_webDateTimeViewController;
- (void)set_webDateTimeViewController:;
@end
