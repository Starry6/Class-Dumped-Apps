@interface AWEIMInputKeyboardHelper : NSObject
@property (nonatomic) BOOL autoAdjust;
@property (nonatomic) double customKeyboardHeight;
@property (nonatomic) double systemKeyboardHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)autoAdjustEmoticonKeyboardHeight:;
- (double)cacheCustomKeyboardHeight;
- (double)customKeyboardHeight;
- (id)initNotification;
- (void)keyboardChangedWithTransition:;
- (void)saveCustomKeyboardHeight;
- (void)setCustomKeyboardHeight:;
- (void)setSystemKeyboardHeight:;
- (BOOL)shouldReloadCustomKeyboard:;
- (double)systemKeyboardHeight;
- (BOOL)autoAdjust;
- (void)setAutoAdjust:;
+ (void)p_handleKeyboardShowNoti:;
+ (double)p_lastHeight;
+ (void)p_saveHeight:;
+ (double)proposedKeyboardHeight;
+ (double)keyboardHeight;
+ (id)defaultManager;
+ (void)startMonitor;
@end
