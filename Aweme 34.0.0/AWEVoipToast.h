@interface AWEVoipToast : NSObject
- (void)showMessage:withStyle:;
- (void)showMessage:style:;
- (id)showMessageForever:onView:;
- (void)hiddenToast:;
- (long long)__voipToastStyleWithRTVToastStyle:;
- (void)showMessage:;
@end
