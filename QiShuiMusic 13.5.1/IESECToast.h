@interface IESECToast : NSObject
+ (Class)serviceImpl;
+ (void)showHUD:;
+ (void)showNetWeak;
+ (void)show:;
+ (void)showError:;
+ (void)showSuccess:;
@end
