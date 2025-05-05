@interface INSettingMetadataResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedSettingMetadata:;
+ (id)disambiguationWithSettingMetadatasToDisambiguate:;
+ (id)confirmationRequiredWithSettingMetadataToConfirm:;
@end
