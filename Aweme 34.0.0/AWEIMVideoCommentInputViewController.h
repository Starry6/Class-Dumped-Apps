@interface AWEIMVideoCommentInputViewController : UIViewController
@property (nonatomic) <AWEIMVideoCommentInputViewControllerDelegate> delegate;
@property (nonatomic) IESIMGrowingTextView textView;
- (void)p_setupUI;
- (void)growingTextView:willChangeHeight:;
- (BOOL)growingTextView:shouldChangeTextInRange:replacementText:;
- (void)handleKeyboardShowNoti:;
- (void)handleKeyboardHideNoti:;
- (void)clearInputView;
- (id)textView;
- (void)setTextView:;
- (void)dealloc;
- (id)delegate;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)p_addObservers;
- (void)p_removeObservers;
@end
