@interface INCallCapabilityResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedCallCapability:;
+ (id)confirmationRequiredWithCallCapabilityToConfirm:;
@end
