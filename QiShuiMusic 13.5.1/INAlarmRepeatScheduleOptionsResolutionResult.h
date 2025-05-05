@interface INAlarmRepeatScheduleOptionsResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedAlarmRepeatScheduleOptions:;
+ (id)confirmationRequiredWithAlarmRepeatScheduleOptionsToConfirm:;
@end
