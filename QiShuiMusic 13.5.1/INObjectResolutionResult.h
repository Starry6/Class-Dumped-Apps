@interface INObjectResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedObject:;
+ (id)disambiguationWithObjectsToDisambiguate:;
+ (id)confirmationRequiredWithObjectToConfirm:;
@end
