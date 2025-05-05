@interface INPaymentAmountResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedPaymentAmount:;
+ (id)disambiguationWithPaymentAmountsToDisambiguate:;
+ (id)confirmationRequiredWithPaymentAmountToConfirm:;
@end
