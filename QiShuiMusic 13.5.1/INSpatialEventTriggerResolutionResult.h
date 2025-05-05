@interface INSpatialEventTriggerResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedSpatialEventTrigger:;
+ (id)disambiguationWithSpatialEventTriggersToDisambiguate:;
+ (id)confirmationRequiredWithSpatialEventTriggerToConfirm:;
@end
