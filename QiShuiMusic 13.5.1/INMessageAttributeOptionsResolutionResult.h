@interface INMessageAttributeOptionsResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedMessageAttributeOptions:;
+ (id)successWithResolvedValue:;
+ (id)confirmationRequiredWithMessageAttributeOptionsToConfirm:;
+ (id)confirmationRequiredWithValueToConfirm:;
@end
