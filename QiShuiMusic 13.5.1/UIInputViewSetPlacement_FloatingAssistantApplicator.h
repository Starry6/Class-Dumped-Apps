@interface UIInputViewSetPlacement_FloatingAssistantApplicator : UIInputViewSetPlacement_AssistantApplicator
@property (nonatomic) TUIInputAssistantHostView hostView;
- (id)hostView;
- (void)setHostView:;
- (void)applyChanges:;
- (BOOL)shouldApplyOriginChange;
- (id)popoverFrame;
- (id)inputAccessoryPadding;
- (void)prepare;
- (void).cxx_destruct;
- (void)invalidate;
+ (id)inputAccessoryPaddingForTraitCollection:;
@end
