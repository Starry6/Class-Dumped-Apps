@interface INStartCallCallRecordToCallBackResolutionResult : INCallRecordResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithCallRecordResolutionResult:;
+ (id)unsupportedForReason:;
@end
