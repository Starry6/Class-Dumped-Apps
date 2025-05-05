@interface INRelativeReferenceResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedValue:;
+ (id)confirmationRequiredWithValueToConfirm:;
+ (id)successWithResolvedRelativeReference:;
+ (id)confirmationRequiredWithRelativeReferenceToConfirm:;
@end
