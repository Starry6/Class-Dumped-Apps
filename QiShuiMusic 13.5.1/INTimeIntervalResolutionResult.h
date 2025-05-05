@interface INTimeIntervalResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTimeInterval:;
+ (id)confirmationRequiredWithTimeIntervalToConfirm:;
@end
