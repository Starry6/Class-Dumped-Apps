@interface INSnoozeTasksTaskResolutionResult : INTaskResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithTaskResolutionResult:;
+ (id)unsupportedForReason:;
@end
