@interface INPaymentAccountResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedPaymentAccount:;
+ (id)disambiguationWithPaymentAccountsToDisambiguate:;
+ (id)confirmationRequiredWithPaymentAccountToConfirm:;
@end
