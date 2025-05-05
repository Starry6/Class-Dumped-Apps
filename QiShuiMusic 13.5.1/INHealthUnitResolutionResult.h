@interface INHealthUnitResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedHealthUnit:;
+ (id)disambiguationWithHealthUnitsToDisambiguate:;
+ (id)confirmationRequiredWithHealthUnitToConfirm:;
@end
