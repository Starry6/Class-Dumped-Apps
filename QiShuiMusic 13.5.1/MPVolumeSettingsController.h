@interface MPVolumeSettingsController : UIViewController
@property (nonatomic) UIWindow hostingWindow;
@property (nonatomic) UIWindow previousWindow;
- (void)dealloc;
- (id)hostingWindow;
- (id)previousWindow;
- (void)setPreviousWindow:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)_keyWindowDidChange:;
- (void)_flip;
- (id)initWithAudioCategory:;
- (void)presentAlertControllerInWindow:;
- (void)dismissAlertController;
- (void)setHostingWindow:;
@end
