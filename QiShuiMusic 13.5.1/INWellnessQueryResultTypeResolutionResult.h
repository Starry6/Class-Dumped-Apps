@interface INWellnessQueryResultTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedWellnessQueryResultType:;
+ (id)confirmationRequiredWithWellnessQueryResultTypeToConfirm:;
@end
