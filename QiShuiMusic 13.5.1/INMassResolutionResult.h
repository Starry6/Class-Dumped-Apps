@interface INMassResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedMass:;
+ (id)disambiguationWithMassToDisambiguate:;
+ (id)confirmationRequiredWithMassToConfirm:;
@end
