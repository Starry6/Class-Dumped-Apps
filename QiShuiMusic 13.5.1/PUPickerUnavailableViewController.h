@interface PUPickerUnavailableViewController : UIViewController
@property (nonatomic) Q reason;
@property (nonatomic) PHPickerConfiguration configuration;
@property (nonatomic) NSError error;
@property (nonatomic) <_PUPickerUnavailableViewControllerDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (unsigned long long)reason;
- (id)error;
- (id)initWithCoder:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)cancelButtonTapped:;
- (id)unavailableTitle;
- (id)initWithReason:configuration:error:;
- (void)updateReason:error:;
- (void)updateUnavailableView;
- (id)unavailableMessage;
- (id)unavailableButtonTitle;
- (id)reasonDebugDescription;
- (id)unavailableKey;
- (void)askDelegateToCancel;
- (void)askDelegateToRetry;
+ (id)unavailableViewController:configuration:error:delegate:;
@end
