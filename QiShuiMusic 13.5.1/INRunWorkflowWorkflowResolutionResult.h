@interface INRunWorkflowWorkflowResolutionResult : INSpeakableStringResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithSpeakableStringResolutionResult:;
+ (id)unsupportedForReason:;
@end
