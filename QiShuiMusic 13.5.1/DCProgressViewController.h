@interface DCProgressViewController : UIViewController
@property (nonatomic) UIActivityIndicatorView activityIndicator;
@property (nonatomic) DCCircularProgressView circularProgressView;
@property (nonatomic) UILabel label;
@property (nonatomic) NSProgress observedProgress;
@property (nonatomic) BOOL showsCancel;
@property (nonatomic) <DCProgressViewControllerDelegate> progressDelegate;
- (id)activityIndicator;
- (void)setLabel:;
- (void)setActivityIndicator:;
- (id)label;
- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)viewWillAppear:;
- (void)viewDidLoad;
- (void)setObservedProgress:;
- (id)observedProgress;
- (BOOL)showsCancel;
- (void)setShowsCancel:;
- (id)progressDelegate;
- (void)setProgressDelegate:;
- (id)circularProgressView;
- (void)setCircularProgressView:;
@end
