@interface INCurrencyAmountResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedCurrencyAmount:;
+ (id)disambiguationWithCurrencyAmountsToDisambiguate:;
+ (id)confirmationRequiredWithCurrencyAmountToConfirm:;
@end
