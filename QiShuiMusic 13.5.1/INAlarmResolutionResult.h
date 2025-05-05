@interface INAlarmResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedAlarm:;
+ (id)disambiguationWithAlarmsToDisambiguate:;
+ (id)confirmationRequiredWithAlarmToConfirm:;
@end
