@interface INBillPayeeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedBillPayee:;
+ (id)disambiguationWithBillPayeesToDisambiguate:;
+ (id)confirmationRequiredWithBillPayeeToConfirm:;
@end
