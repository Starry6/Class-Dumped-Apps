@interface AWEKeyboardWatchdog : NSObject
@property (nonatomic) AWEKeyboardWatchdog keyboardInfo;
@property (nonatomic) BOOL isKeyboardDisplaying;
- (void)handleKeyboardDidChangeFrameNotification:;
- (void)handleKeyboardDidHideNotification:;
- (void)handleKeyboardDidShowNotification:;
- (void)handleKeyboardWillHideNotification:;
- (void)handleKeyboardWillShowNotification:;
- (BOOL)isKeyboardDisplaying;
- (void)setIsKeyboardDisplaying:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)keyboardInfo;
- (void)setKeyboardInfo:;
+ (id)sharedInstance;
@end
