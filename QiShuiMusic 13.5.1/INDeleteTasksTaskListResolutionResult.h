@interface INDeleteTasksTaskListResolutionResult : INTaskListResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithTaskListResolutionResult:;
+ (id)unsupportedForReason:;
@end
