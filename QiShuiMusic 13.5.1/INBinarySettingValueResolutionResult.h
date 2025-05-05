@interface INBinarySettingValueResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedBinarySettingValue:;
+ (id)confirmationRequiredWithBinarySettingValueToConfirm:;
@end
