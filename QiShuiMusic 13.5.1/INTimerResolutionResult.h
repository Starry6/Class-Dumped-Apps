@interface INTimerResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTimer:;
+ (id)disambiguationWithTimersToDisambiguate:;
+ (id)confirmationRequiredWithTimerToConfirm:;
@end
