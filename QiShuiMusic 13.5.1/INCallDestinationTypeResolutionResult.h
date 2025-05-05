@interface INCallDestinationTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedCallDestinationType:;
+ (id)confirmationRequiredWithCallDestinationTypeToConfirm:;
@end
