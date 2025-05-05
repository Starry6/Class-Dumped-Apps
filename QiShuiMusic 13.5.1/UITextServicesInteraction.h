@interface UITextServicesInteraction : UITextInteraction
@property (nonatomic) _UITextServicesResponderProxy responderProxy;
@property (nonatomic) UIResponder responder;
- (id)responder;
- (void)finishSetup;
- (void)setResponderProxy:;
- (void)_removeShareController;
- (void)_define:;
- (id)responderProxy;
- (void)_removeShortcutController;
- (void)_share:;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (void)_beginSessionWithType:sender:;
- (void)_translate:;
- (void)_addShortcut:;
@end
