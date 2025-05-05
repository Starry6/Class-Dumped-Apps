@interface INJoinCallGroupConversationResolutionResult : INCallGroupConversationResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithCallGroupConversationResolutionResult:;
+ (id)unsupportedForReason:;
@end
