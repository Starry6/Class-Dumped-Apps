@interface INOutgoingMessageTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedOutgoingMessageType:;
+ (id)confirmationRequiredWithOutgoingMessageTypeToConfirm:;
@end
