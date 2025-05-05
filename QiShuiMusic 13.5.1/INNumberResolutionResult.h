@interface INNumberResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedNumber:;
+ (id)disambiguationWithNumbersToDisambiguate:;
+ (id)confirmationRequiredWithNumberToConfirm:;
@end
