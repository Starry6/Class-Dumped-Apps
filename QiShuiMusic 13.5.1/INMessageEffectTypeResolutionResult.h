@interface INMessageEffectTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedMessageEffect:;
+ (id)confirmationRequiredWithMessageEffectToConfirm:;
@end
