@interface INSaveHealthSampleRecordDateResolutionResult : INDateComponentsRangeResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithDateComponentsRangeResolutionResult:;
+ (id)unsupportedForReason:;
@end
