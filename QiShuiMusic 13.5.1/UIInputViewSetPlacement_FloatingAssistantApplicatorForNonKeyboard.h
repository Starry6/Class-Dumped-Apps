@interface UIInputViewSetPlacement_FloatingAssistantApplicatorForNonKeyboard : UIInputViewSetPlacement_FloatingAssistantApplicator
- (id)initForOwner:withPlacement:;
- (BOOL)shouldApplyOriginChange;
- (id)inputAssistantPadding;
- (void)invalidate;
@end
