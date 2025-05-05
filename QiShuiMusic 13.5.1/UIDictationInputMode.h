@interface UIDictationInputMode : UISpecializedInputMode
@property (nonatomic) UITouch triggeringTouch;
@property (nonatomic) UIKeyboardInputMode currentInputModeForDictation;
@property (nonatomic) BOOL usingTypeAndTalk;
- (id)indicatorIconForDictationLanguage:scaleFactor:;
- (Class)viewControllerClass;
- (BOOL)showSWLayoutWithHWKeyboard;
- (void)setCurrentInputModeForDictation:;
- (void).cxx_destruct;
- (void)setUsingTypeAndTalk:;
- (BOOL)includeBarHeight;
- (BOOL)usingTypeAndTalk;
- (void)setTriggeringTouch:;
- (id)currentInputModeForDictation;
- (id)triggeringTouch;
+ (BOOL)currentInputModeSupportsDictation;
@end
