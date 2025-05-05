@interface INTemporalEventTriggerResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTemporalEventTrigger:;
+ (id)disambiguationWithTemporalEventTriggersToDisambiguate:;
+ (id)confirmationRequiredWithTemporalEventTriggerToConfirm:;
@end
