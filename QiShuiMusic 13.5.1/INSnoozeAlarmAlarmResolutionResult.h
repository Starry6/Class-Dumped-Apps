@interface INSnoozeAlarmAlarmResolutionResult : INAlarmResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithAlarmResolutionResult:;
+ (id)unsupportedForReason:;
@end
