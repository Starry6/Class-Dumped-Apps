@interface UISpecializedInputMode : UIKeyboardInputMode
@property (nonatomic) # viewControllerClass;
- (void)dealloc;
- (Class)viewControllerClass;
- (BOOL)showSWLayoutWithHWKeyboard;
- (void)setViewControllerClass:;
- (void).cxx_destruct;
- (BOOL)includeBarHeight;
- (BOOL)isSpecializedInputMode;
- (id)hardwareLayout;
@end
