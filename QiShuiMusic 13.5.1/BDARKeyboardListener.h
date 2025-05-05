@interface BDARKeyboardListener : NSObject
@property (nonatomic) BOOL visible;
@property (nonatomic) double keyboardHeight;
- (void)didShow:;
- (double)keyboardHeight;
- (id)init;
- (void)setVisible:;
- (void)setKeyboardHeight:;
- (BOOL)isVisible;
- (void)keyboardWillChangeFrame:;
- (void)didHide;
+ (id)sharedInstance;
@end
