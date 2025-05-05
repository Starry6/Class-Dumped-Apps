@interface INChangeAlarmStatusOperationResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedChangeAlarmStatusOperation:;
+ (id)confirmationRequiredWithChangeAlarmStatusOperationToConfirm:;
@end
