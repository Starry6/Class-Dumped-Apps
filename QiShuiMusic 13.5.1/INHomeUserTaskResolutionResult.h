@interface INHomeUserTaskResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedHomeUserTask:;
+ (id)disambiguationWithHomeUserTasksToDisambiguate:;
+ (id)confirmationRequiredWithHomeUserTaskToConfirm:;
@end
