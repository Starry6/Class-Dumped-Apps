@interface CJPayThemedCommonListViewController : CJPayCommonListViewController
@property (nonatomic) q previousStatusBarStyle;
- (BOOL)cj_supportMultiTheme;
- (long long)cjpay_preferredStatusBarStyle;
- (long long)previousStatusBarStyle;
- (void)setPreviousStatusBarStyle:;
- (void)viewDidLoad;
@end
