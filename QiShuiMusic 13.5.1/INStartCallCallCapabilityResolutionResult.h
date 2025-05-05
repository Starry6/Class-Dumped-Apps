@interface INStartCallCallCapabilityResolutionResult : INCallCapabilityResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithCallCapabilityResolutionResult:;
+ (id)unsupportedForReason:;
@end
