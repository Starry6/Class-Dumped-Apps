@interface SwiftUI.NotifyingMulticolumnSplitViewController : UISplitViewController
@property (nonatomic) UIViewController childViewControllerForStatusBarHidden;
- (void)showDetailViewController:sender:;
- (id)makeDetailNavigationControllerWithRoot:;
- (id)initWithCoder:;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithStyle:;
- (id)initWithNibName:bundle:;
@end
