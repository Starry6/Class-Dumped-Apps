@interface YYTextKeyboardManager : NSObject
@property (nonatomic) UIWindow keyboardWindow;
@property (nonatomic) UIView keyboardView;
@property (nonatomic) BOOL keyboardVisible;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} keyboardFrame;
- (id)_getKeyboardViewFromWindow:;
- (void)_initFrameObserver;
- (void)_keyboardFrameChanged:;
- (void)_keyboardFrameDidChangeNotification:;
- (void)_keyboardFrameWillChangeNotification:;
- (void)_notifyAllObservers;
- (void)removeObserver:;
- (id)convertRect:toView:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (id)keyboardView;
- (BOOL)isKeyboardVisible;
- (void).cxx_destruct;
- (id)_init;
- (id)keyboardWindow;
- (double)_systemVersion;
- (id)keyboardFrame;
+ (id)defaultManager;
@end
