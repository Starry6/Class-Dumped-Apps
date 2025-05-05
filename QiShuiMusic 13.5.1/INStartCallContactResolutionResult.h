@interface INStartCallContactResolutionResult : INPersonResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithPersonResolutionResult:;
+ (id)unsupportedForReason:;
+ (id)confirmationRequiredWithPersonToConfirm:forReason:;
@end
