@interface AWEScreenShootShareOutsideQQZoneViewModel : AWEScreenShootBaseViewModel
- (BOOL)needShow;
- (void)configVM;
+ (id)ScreenShootViewModel;
+ (id)ScreenShootViewModelWithShareNoQRCodeAndNoAwemeModelCheck:;
@end
