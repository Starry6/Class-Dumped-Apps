@interface INCarSignalOptionsResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedValue:;
+ (id)confirmationRequiredWithValueToConfirm:;
+ (id)successWithResolvedCarSignalOptions:;
+ (id)confirmationRequiredWithCarSignalOptionsToConfirm:;
@end
