@interface UIPrintingProgressViewController : UITableViewController
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (void)willAnimateRotationToInterfaceOrientation:duration:;
- (void)dismissAnimated:;
- (BOOL)visible;
- (void)didRotateFromInterfaceOrientation:;
- (void)setMessage:;
- (void)show;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)doneProgress;
- (void)cancelProgress;
- (id)initWithTitle:message:printingProgress:;
- (void)setDonePrinting:;
- (void)cleanupAfterDismiss;
- (double)rotationDelay;
@end
