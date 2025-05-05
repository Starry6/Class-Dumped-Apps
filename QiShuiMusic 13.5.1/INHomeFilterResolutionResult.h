@interface INHomeFilterResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedHomeFilter:;
+ (id)disambiguationWithHomeFiltersToDisambiguate:;
+ (id)confirmationRequiredWithHomeFilterToConfirm:;
@end
