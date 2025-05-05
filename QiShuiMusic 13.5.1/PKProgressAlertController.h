@interface PKProgressAlertController : UIAlertController
@property (nonatomic) <PKProgressAlertControllerDelegate> delegate;
@property (nonatomic) double progress;
- (void)setDelegate:;
- (void)setProgress:;
- (BOOL)_canShowWhileLocked;
- (double)progress;
- (BOOL)canBecomeFirstResponder;
- (id)delegate;
- (void).cxx_destruct;
+ (id)newProgressAlertControllerWithTitle:cancel:;
@end
