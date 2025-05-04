@interface AWEKeyboardAnimationManager : NSObject
+ (double)keyboardOffsetForView:keyboardRect:;
+ (id)observeKeyboardWithWillShowAction:willHideAction:;
+ (id)observeKeyboardUserInfoWithWillShowAction:willHideAction:;
@end
