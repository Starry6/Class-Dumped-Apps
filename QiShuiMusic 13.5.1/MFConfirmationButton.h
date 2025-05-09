@interface MFConfirmationButton : MFDimmableButton
@property (nonatomic) @? handlerBlock;
@property (nonatomic) BOOL hasPresentedConfirmation;
@property (nonatomic) Q confirmationType;
@property (nonatomic) Q confirmationSelectionMode;
@property (nonatomic) NSString confirmationMessage;
@property (nonatomic) NSString confirmationLabel;
@property (nonatomic) UIImage confirmationIcon;
- (void)setSelected:;
- (id)handlerBlock;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (void).cxx_destruct;
- (void)setHandlerBlock:;
- (void)reset;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
- (unsigned long long)confirmationType;
- (void)setConfirmationType:;
- (void)_didConfirm;
- (void)setConfirmationSelectionMode:;
- (void)_updateButtonAction;
- (BOOL)_isInConfirmableState;
- (id)_confirmationMenu;
- (unsigned long long)confirmationSelectionMode;
- (id)confirmationMessage;
- (void)setConfirmationMessage:;
- (id)confirmationLabel;
- (void)setConfirmationLabel:;
- (id)confirmationIcon;
- (void)setConfirmationIcon:;
- (BOOL)hasPresentedConfirmation;
- (void)setHasPresentedConfirmation:;
+ (id)confirmationButtonWithMessage:confirmationLabel:handler:;
@end
