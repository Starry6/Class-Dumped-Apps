@interface INCallRecordResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedCallRecord:;
+ (id)disambiguationWithCallRecordsToDisambiguate:;
+ (id)confirmationRequiredWithCallRecordToConfirm:;
@end
