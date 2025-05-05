@interface EXPlaceholderViewController : UIViewController
@property (nonatomic) UIActivityIndicatorView activityView;
@property (nonatomic) NSTimer timer;
@property (nonatomic) UIImageView completeIcon;
@property (nonatomic) Q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setState:;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)setTimer:;
- (void)setActivityView:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)timer;
- (id)activityView;
- (void)viewWillAppear:;
- (void)loadView;
- (void)hostViewController:didPrepareToHost:;
- (void)hostViewController:didEndHosting:error:;
- (void)hostViewController:didBeginHosting:;
- (id)completeIcon;
- (void)setCompleteIcon:;
@end
