@interface UIWebFormSelectPeripheral : NSObject
@property (nonatomic) DOMHTMLSelectElement _selectionNode;
@property (nonatomic) <UIWebFormControl> _selectControl;
- (void)dealloc;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (id)_selectionNode;
- (void)set_selectionNode:;
- (id)initWithDOMHTMLSelectElement:;
- (id)_selectControl;
- (void)set_selectControl:;
+ (id)createPeripheralWithDOMHTMLSelectElement:;
@end
