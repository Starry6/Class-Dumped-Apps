@interface INAddTasksTargetTaskListResolutionResult : INTaskListResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithTaskListResolutionResult:;
+ (id)confirmationRequiredWithTaskListToConfirm:forReason:;
@end
