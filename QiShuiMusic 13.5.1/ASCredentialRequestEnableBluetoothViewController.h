@interface ASCredentialRequestEnableBluetoothViewController : ASCredentialRequestPaneViewController
@property (nonatomic) ASCAuthorizationPresentationContext presentationContext;
@property (nonatomic) @? enableBluetoothHandler;
- (id)presentationContext;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_message;
- (id)initWithPresentationContext:;
- (void)_enableBluetooth;
- (void)_setUpTitlePane;
- (void)_setUpMessagePane;
- (void)_setUpButtonPane;
- (id)enableBluetoothHandler;
- (void)setEnableBluetoothHandler:;
@end
