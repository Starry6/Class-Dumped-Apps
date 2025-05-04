@interface AWELoginAlertView : AWEUIAlertView
+ (void)showAlertWithLoginSettings:leftActionBlock:rightActionBlock:;
+ (void)showAlertWithTitle:description:imageName:leftButtonTitle:rightButtonTitle:leftActionBlock:rightActionBlock:;
@end
