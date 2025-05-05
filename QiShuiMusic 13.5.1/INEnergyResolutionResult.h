@interface INEnergyResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedEnergy:;
+ (id)disambiguationWithEnergyToDisambiguate:;
+ (id)confirmationRequiredWithEnergyToConfirm:;
@end
