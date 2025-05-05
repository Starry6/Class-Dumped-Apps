@interface INPaymentMethodResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedPaymentMethod:;
+ (id)disambiguationWithPaymentMethodsToDisambiguate:;
+ (id)confirmationRequiredWithPaymentMethodToConfirm:;
@end
