@interface QLDetailItemViewController : QLItemViewController
@property (nonatomic) QLDetailItemViewControllerState state;
@property (nonatomic) NSArray information;
- (void)setState:animated:;
- (void)setState:;
- (void)performAction;
- (id)state;
- (void).cxx_destruct;
- (id)information;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)setInformation:;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)setAppearance:animated:;
- (void)_updateInformation;
- (void)_setActionButtonView:animated:actionButtonLabel:informationVisible:;
- (id)_scalableSystemFontOfSize:;
@end
