@interface AWEScreenShootShareOutsideWeixinViewModel : AWEScreenShootBaseViewModel
- (BOOL)needShow;
- (void)configVM;
+ (id)ScreenShootViewModel;
+ (id)ScreenShootViewModelWithShareNoQRCodeAndNoAwemeModelCheck:;
@end
