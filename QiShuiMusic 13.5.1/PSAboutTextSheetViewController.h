@interface PSAboutTextSheetViewController : UIViewController
- (void)setAttributedText:;
- (void)loadView;
- (void)donePressed;
+ (void)presentAboutSheetTitled:attributedText:fromViewController:;
@end
