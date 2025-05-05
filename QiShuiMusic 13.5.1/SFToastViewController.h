@interface SFToastViewController : UIViewController
@property (nonatomic) UIViewController contentViewController;
@property (nonatomic) <SFToastViewControllerDelegate> delegate;
@property (nonatomic) double toastDuration;
- (void)preferredContentSizeDidChangeForChildContentContainer:;
- (void)setDelegate:;
- (id)contentViewController;
- (void)_didReceivePan:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)viewDidLayoutSubviews;
- (id)initWithContentViewController:;
- (void)viewDidLoad;
- (void)_scheduleToastTimerIfNeeded;
- (double)toastDuration;
- (void)setToastDuration:;
@end
