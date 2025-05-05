@interface INVolumeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedVolume:;
+ (id)disambiguationWithVolumeToDisambiguate:;
+ (id)confirmationRequiredWithVolumeToConfirm:;
@end
