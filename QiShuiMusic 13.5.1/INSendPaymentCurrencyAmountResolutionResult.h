@interface INSendPaymentCurrencyAmountResolutionResult : INCurrencyAmountResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithCurrencyAmountResolutionResult:;
+ (id)unsupportedForReason:;
@end
