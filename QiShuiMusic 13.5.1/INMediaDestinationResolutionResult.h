@interface INMediaDestinationResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedMediaDestination:;
+ (id)disambiguationWithMediaDestinationsToDisambiguate:;
+ (id)confirmationRequiredWithMediaDestinationToConfirm:;
@end
