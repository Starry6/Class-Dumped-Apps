@interface INContactEventTriggerResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedContactEventTrigger:;
+ (id)disambiguationWithContactEventTriggersToDisambiguate:;
+ (id)confirmationRequiredWithContactEventTriggerToConfirm:;
@end
