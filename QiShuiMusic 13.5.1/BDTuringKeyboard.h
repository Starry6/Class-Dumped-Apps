@interface BDTuringKeyboard : NSObject
@property (nonatomic) double keyboardTop;
@property (nonatomic) BOOL keyboardIsShow;
@property (nonatomic) <BDTuringKeyboardDelegate> delegate;
- (void)setKeyboardTop:;
- (BOOL)keyboardIsShow;
- (double)keyboardTop;
- (void)onKeyboardWillHide:;
- (void)onKeyboardWillShow:;
- (void)setKeyboardIsShow:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedKeyboard;
@end
