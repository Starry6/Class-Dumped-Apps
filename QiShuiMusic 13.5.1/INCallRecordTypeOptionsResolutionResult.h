@interface INCallRecordTypeOptionsResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedValue:;
+ (id)confirmationRequiredWithValueToConfirm:;
+ (id)successWithResolvedCallRecordTypeOptions:;
+ (id)confirmationRequiredWithCallRecordTypeOptionsToConfirm:;
@end
