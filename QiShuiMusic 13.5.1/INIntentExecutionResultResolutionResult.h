@interface INIntentExecutionResultResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedIntentExecutionResult:;
+ (id)disambiguationWithIntentExecutionResultsToDisambiguate:;
+ (id)confirmationRequiredWithIntentExecutionResultToConfirm:;
@end
