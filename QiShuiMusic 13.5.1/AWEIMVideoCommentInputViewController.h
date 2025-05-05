@interface AWEIMVideoCommentInputViewController : UIViewController
@property (nonatomic) <AWEIMVideoCommentInputViewControllerDelegate> delegate;
@property (nonatomic) IESIMGrowingTextView textView;
- (void)clearInputView;
- (BOOL)growingTextView:shouldChangeTextInRange:replacementText:;
- (void)growingTextView:willChangeHeight:;
- (void)handleKeyboardHideNoti:;
- (void)handleKeyboardShowNoti:;
- (void)p_setupUI;
- (id)textView;
- (void)dealloc;
- (void)setDelegate:;
- (void)setTextView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)p_removeObservers;
- (void)p_addObservers;
@end
