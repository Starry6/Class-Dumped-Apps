@interface INRequestPaymentPayerResolutionResult : INPersonResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithPersonResolutionResult:;
+ (id)unsupportedForReason:;
@end
