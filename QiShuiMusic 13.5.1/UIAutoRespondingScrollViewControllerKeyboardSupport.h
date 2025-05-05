@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject
@property (nonatomic) double adjustmentForKeyboard;
@property (nonatomic) BOOL viewIsDisappearing;
@property (nonatomic) BOOL registeredForNotifications;
- (void)_keyboardDidHide:;
- (void)_keyboardDidShow:;
- (void)_keyboardWillShow:;
- (void)_keyboardWillHide:;
- (void)setRegisteredForNotifications:;
- (BOOL)viewIsDisappearing;
- (void)_keyboardDidChangeFrame:;
- (void)setAdjustmentForKeyboard:;
- (double)adjustmentForKeyboard;
- (void)setViewIsDisappearing:;
- (BOOL)registeredForNotifications;
- (void).cxx_destruct;
- (void)_adjustScrollViewForKeyboardInfo:;
- (id)initWithViewController:;
@end
