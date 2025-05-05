@interface INStartCallPreferredCallProviderResolutionResult : INPreferredCallProviderResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithPreferredCallProviderResolutionResult:;
+ (id)unsupportedForReason:;
@end
