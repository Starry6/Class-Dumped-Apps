@interface UIKBAnalyticsDispatcher : NSObject
+ (void)keyboardCameraSessionEndedForTextContentType:didFindText:didInsertText:sender:;
+ (id)currentInputMode;
+ (void)globeKeyEducationShown:;
+ (void)analyticsDispatchEventTextEditingOperation:trigger:;
+ (void)dispatchFloatingKeyboardEventOfType:trigger:pinnedToEdge:position:touchUpPosition:;
+ (id)allowedValuesForType:;
+ (void)floatingKeyboardMoved:toPosition:touchPosition:;
+ (id)preferredEventName:;
+ (void)floatingKeyboardSummonedEvent:trigger:finalPosition:;
+ (void)emojiInsertedByMethod:inputType:;
+ (void)hapticEventEngineDuration:startCount:actionCount:;
+ (void)keyboardShortcutInvokedWithKeyCommand:keyEvent:keyboardProperties:;
+ (void)globeKeySelected;
+ (void)sessionEfficacyAnalyticsEnded:;
+ (void)deleteKeySelected:;
+ (void)editingSessionEnded:;
+ (void)keyplaneSwitched:;
+ (void)emojiPopoverSummoned:appendsEmoji:;
+ (void)handwritingResized:;
+ (void)globeKeyLongPress;
+ (void)sessionAnalyticsEnded:;
+ (void)candidateViewExtended:direction:;
+ (id)allowedValuesForTextEditingPreferredFieldName:;
@end
