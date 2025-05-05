@interface INAlarmSearchTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedAlarmSearchType:;
+ (id)confirmationRequiredWithAlarmSearchTypeToConfirm:;
@end
