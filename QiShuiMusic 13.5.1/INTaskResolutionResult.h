@interface INTaskResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTask:;
+ (id)disambiguationWithTasksToDisambiguate:;
+ (id)confirmationRequiredWithTaskToConfirm:;
@end
