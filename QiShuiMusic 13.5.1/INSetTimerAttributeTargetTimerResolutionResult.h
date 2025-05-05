@interface INSetTimerAttributeTargetTimerResolutionResult : INTimerResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithTimerResolutionResult:;
+ (id)unsupportedForReason:;
@end
