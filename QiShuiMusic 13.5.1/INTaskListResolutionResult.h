@interface INTaskListResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTaskList:;
+ (id)disambiguationWithTaskListsToDisambiguate:;
+ (id)confirmationRequiredWithTaskListToConfirm:;
@end
