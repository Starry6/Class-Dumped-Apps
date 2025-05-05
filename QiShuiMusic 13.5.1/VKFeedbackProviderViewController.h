@interface VKFeedbackProviderViewController : UIViewController
@property (nonatomic) <VKFeedbackProviderViewControllerDelegate> delegate;
- (void)dealloc;
- (void)present;
- (void)setDelegate:;
- (BOOL)_canShowWhileLocked;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (void)_createContentView;
- (void)viewDidLoad;
- (void)_toggleContentRowButton:;
- (id)initWithOptions:attachments:;
- (id)_contentRowButtonWithTitle:tag:allowToggle:;
@end
