@interface INDateComponentsResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedDateComponents:;
+ (id)disambiguationWithDateComponentsToDisambiguate:;
+ (id)confirmationRequiredWithDateComponentsToConfirm:;
@end
