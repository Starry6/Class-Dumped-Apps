@interface INUpdateAlarmOperationResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedUpdateAlarmOperation:;
+ (id)confirmationRequiredWithUpdateAlarmOperationToConfirm:;
@end
