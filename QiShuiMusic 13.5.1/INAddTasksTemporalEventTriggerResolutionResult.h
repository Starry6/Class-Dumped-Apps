@interface INAddTasksTemporalEventTriggerResolutionResult : INTemporalEventTriggerResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithTemporalEventTriggerResolutionResult:;
+ (id)unsupportedForReason:;
@end
