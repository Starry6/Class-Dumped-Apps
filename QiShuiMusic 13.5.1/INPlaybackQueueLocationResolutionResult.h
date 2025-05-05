@interface INPlaybackQueueLocationResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedPlaybackQueueLocation:;
+ (id)confirmationRequiredWithPlaybackQueueLocationToConfirm:;
@end
