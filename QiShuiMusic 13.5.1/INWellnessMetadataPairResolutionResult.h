@interface INWellnessMetadataPairResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedWellnessMetadataPair:;
+ (id)disambiguationWithWellnessMetadataPairsToDisambiguate:;
+ (id)confirmationRequiredWithWellnessMetadataPairToConfirm:;
@end
