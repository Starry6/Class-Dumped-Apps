@interface AWEECOMIMTextView : UITextView
@property (nonatomic) @? pasteBlock;
@property (nonatomic) BOOL disableSystemMenu;
- (BOOL)disableSystemMenu;
- (id)pasteBlock;
- (void)setDisableSystemGestures;
- (BOOL)canBecameFirstResponder;
- (void)setPasteBlock:;
- (void)setDisableSystemMenu:;
- (void)paste:;
- (void)cut:;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (void)copy:;
@end
