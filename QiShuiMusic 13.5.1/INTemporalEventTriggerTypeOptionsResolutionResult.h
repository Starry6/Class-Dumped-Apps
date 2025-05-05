@interface INTemporalEventTriggerTypeOptionsResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTemporalEventTriggerTypeOptions:;
+ (id)confirmationRequiredWithTemporalEventTriggerTypeOptionsToConfirm:;
@end
