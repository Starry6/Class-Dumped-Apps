@interface INNumericSettingValueResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedNumericSettingValue:;
+ (id)disambiguationWithNumericSettingValuesToDisambiguate:;
+ (id)confirmationRequiredWithNumericSettingValueToConfirm:;
@end
