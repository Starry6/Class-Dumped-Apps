@interface INMediaAffinityTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedMediaAffinityType:;
+ (id)confirmationRequiredWithMediaAffinityTypeToConfirm:;
@end
