@interface INTaskPriorityResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedTaskPriority:;
+ (id)confirmationRequiredWithTaskPriorityToConfirm:;
@end
