@interface INTaskReferenceResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedTaskReference:;
+ (id)confirmationRequiredWithTaskReferenceToConfirm:;
@end
