@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)pressAndHoldViewDidAcceptAccentVariant:atIndexPath:;
- (id)initWithKeyString:;
- (BOOL)handleHardwareKeyboardEvent:;
- (BOOL)isSamePressAndHoldPopoverForKeyString:;
- (BOOL)handleKeyInputForPressAndHoldSelector:;
- (BOOL)handleSelectionEvent:;
- (BOOL)handleKeyInputForAccentSelector:;
- (BOOL)hasAccentVariantInForwardDirection:;
- (void)showAccentVariantInForwardDirection:;
- (void)insertSelectedAccentVariant:shouldDismissPopover:;
+ (BOOL)canPresentPressAndHoldPopoverForEvent:;
+ (BOOL)canPresentPressAndHoldPopoverForKeyString:;
@end
