@interface PKTextInputKeyboardAssistantItem : UIBarButtonItem
@property (nonatomic) PKPaletteFloatingKeyboardController floatingKeyboardController;
@property (nonatomic) <PKTextInputKeyboardAssistantItemDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)initWithCoder:;
- (id)delegate;
- (void).cxx_destruct;
- (void)floatingKeyboardController:didChangeKeyboardType:;
- (void)floatingKeyboardControllerWillHide:;
- (void)floatingKeyboardControllerWillShow:;
- (id)responderForFloatingKeyboardController:;
- (id)floatingKeyboardController;
- (void)setFloatingKeyboardController:;
- (void)didAction:;
- (void)_updateImageAndNotify;
- (void)didDisplayAssistantItem;
- (id)_currentInteraction;
@end
