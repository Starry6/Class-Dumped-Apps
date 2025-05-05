@interface DevicePINSetupController : PSSetupController
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL allowOptionsButton;
- (id)init;
- (BOOL)success;
- (void)setSuccess:;
- (id)preferredContentSize;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:animate:;
- (BOOL)usePopupStyle;
- (BOOL)popupStyleIsModal;
- (BOOL)allowOptionsButton;
- (void)setAllowOptionsButton:;
@end
