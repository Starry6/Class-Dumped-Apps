@interface INSpeedResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedSpeed:;
+ (id)disambiguationWithSpeedToDisambiguate:;
+ (id)confirmationRequiredWithSpeedToConfirm:;
@end
