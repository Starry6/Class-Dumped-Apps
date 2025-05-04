@interface AWEScreenShootShareOutsideSinaViewModel : AWEScreenShootBaseViewModel
- (BOOL)needShow;
- (void)configVM;
+ (id)ScreenShootViewModel;
+ (id)ScreenShootViewModelWithShareNoQRCodeAndNoAwemeModelCheck:;
@end
