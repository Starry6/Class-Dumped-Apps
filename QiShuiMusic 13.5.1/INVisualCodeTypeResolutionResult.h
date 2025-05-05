@interface INVisualCodeTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedVisualCodeType:;
+ (id)confirmationRequiredWithVisualCodeTypeToConfirm:;
@end
